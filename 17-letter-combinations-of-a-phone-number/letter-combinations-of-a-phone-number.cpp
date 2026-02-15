class Solution {
public:

    void solve(string digits,int index,string &output,vector<string> &ans,unordered_map<char,string>&mapping){
        if(index>=digits.length()){

            ans.push_back(output);
            return;
        }

        char digit=digits[index];

        string mapped =mapping[digit];

        for(char ch :mapped){
            output.push_back(ch);

            solve(digits,index+1,output,ans,mapping);

            output.pop_back();
        }


    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;

        unordered_map<char,string> mapping;

        mapping['2']="abc";
        mapping['3']="def";
        mapping['4']="ghi";
        mapping['5']="jkl";
        mapping['6']="mno";
        mapping['7']="pqrs";
        mapping['8']="tuv";
        mapping['9']="wxyz";

        string output="";
        int index=0;

        solve(digits,index,output,ans,mapping);
        return ans;

    }
};