class Solution {
public:

   void solve(vector<int>& candidates,int target,vector<vector<int>> &arr,vector<int>&v,int index){

        if(target==0){
            arr.push_back(v);
        }
        if(target<0){
            return;
        }

        for(int i=index; i<candidates.size(); i++){

            v.push_back(candidates[i]);
            solve(candidates,target-candidates[i],arr,v,i);
            v.pop_back();

        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>> arr;
        vector<int>v;

        
        solve(candidates,target,arr,v,0);
        return arr;
    }
};