class Solution {
public:

    int expandsubstring(string s,int i,int j){
        int count=0;
    while(i>=0 && j<s.length() && s[i]==s[j]){
        count++;
        i--;
        j++;
    }
    return count;
    }
    int countSubstrings(string s) {
        int totalcount=0;
        for(int counter=0; counter<s.length(); counter++){
            int i=counter;
            int j=counter;
            int oddpalicheck=expandsubstring(s,i,j);
             i=counter;
             j=counter+1;
            int evenpalcheck=expandsubstring(s,i,j);

            totalcount=totalcount+oddpalicheck+evenpalcheck;

        }
        return totalcount;
    }
};