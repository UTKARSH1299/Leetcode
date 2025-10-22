class Solution {
public:

bool checkPalindrome(string str,int s, int e){
   while(s<=e){
    if(str[s]!=str[e]){
        return false;
    }
    else{
        s++;
        e--;
    }
   }
   return true;
}
    bool validPalindrome(string s) {
        int len=s.length();
        int i=0;
        int j=len-1;

        while(i<=j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
            else{
                //s[i]!=s[j]

                bool ans1=checkPalindrome(s,i+1,j);
                bool ans2=checkPalindrome(s,i,j-1);
               bool check=ans1 || ans2;
               return check;
            
            }
        }
        return true;
    }
};