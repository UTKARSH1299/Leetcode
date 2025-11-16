class Solution {
public:

    bool isVowel(char ch){
        ch=tolower(ch);
        return ch=='e'||ch=='a'||ch=='i'||ch=='o'||ch=='u';
    }
    string reverseVowels(string s) {
        int l=0; 
        int high= s.size()-1;

        while(l<high){
            if(isVowel(s[l]) && isVowel(s[high])){
                swap(s[l],s[high]);
                l++;
                high--;

            }
            else if(isVowel(s[l])==0){
                l++;
            }
            else{
                high--;
            }
        }
        return s;
    }
};