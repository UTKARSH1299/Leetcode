class Solution {
public:
    string removeDuplicates(string s) {
        //first in github
        string ans="";
        int n=s.length();

        for(int i=0; i<n; i++){

            char currentchar=s[i];

            if(ans.empty()){
                ans.push_back(currentchar);
            }
            else if(ans.back()==currentchar){
                ans.pop_back();
            }
            else{
                 ans.push_back(currentchar);
            }
        }
        return ans;
    }
    //return ans;
};