class Solution {
public:
  void solve( vector<string> &ans,int open, int close,string output,int &n){

    //base case

    if(open+close==2*n){

        ans.push_back(output);
        return ;

    }

    if(open<n){
      solve(ans,open+1,close,output+"(",n);

    }
    if(close<open){
        solve(ans,open,close+1,output+")",n);
    }



  }

    vector<string> generateParenthesis(int n) {

        //string vector me di h to copy kr lenge
        vector<string> ans;
     
     //Ak solve anam ka function bna lenge
     solve(ans,0,0,"",n);
     
        return ans;
    }
};