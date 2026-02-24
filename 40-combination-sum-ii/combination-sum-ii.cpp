class Solution {
public:
    void solve(vector<int>& candidates, int target, 
               vector<vector<int>>& ans, 
               vector<int>& temp, int start) {
        
        if(target == 0) {
            ans.push_back(temp);
            return;
        }
        
        for(int i = start; i < candidates.size(); i++) {
            
            // Skip duplicates
            if(i > start && candidates[i] == candidates[i-1])
                continue;
            
            // If number exceeds target, stop (since sorted)
            if(candidates[i] > target)
                break;
            
            temp.push_back(candidates[i]);
            
            // Move to next index (i+1) because only one use allowed
            solve(candidates, target - candidates[i], ans, temp, i + 1);
            
            temp.pop_back(); // Backtrack
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        
        sort(candidates.begin(), candidates.end());
        
        solve(candidates, target, ans, temp, 0);
        
        return ans;
    }
};