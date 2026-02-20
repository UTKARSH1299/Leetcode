class Solution {
public:
    void solve(vector<vector<int>>& ans,vector<int>&curr,int k,int start,int n){

        // int x=0;
        // int y=0;

        // if(i<ans_size && j<ans_size){
        //     matrix.push_back(ans[i][j]);

        // }
        if(k==0){
            ans.push_back(curr);
            return;
        }
        for(int i=start; i<=n; i++){
            curr.push_back(i);
             solve(ans,curr,k-1,i+1,n);
             curr.pop_back();
        }




    }

    vector<vector<int>> combine(int n, int k) {

        vector<vector<int>> ans;
        vector<int>curr;
        // for(int i=1; i<=n; i++){
        //     ans.push_back(i);
        // }
        // int i=0;
        // int ans_size=ans.size();

        solve(ans,curr,k,1,n);
        return ans;
        // for(int result : matrix){

        //     return result;
        // }

        
    }
};