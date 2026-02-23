class Solution {
public:

    int solve(vector<int>& nums, int target, int i, int sum ){
        if(i==nums.size()){
            if(sum==target)
            return 1; 
            
            return 0;

        }

        //include
        int add=solve(nums,target,i+1,sum+nums[i]);

        //exclude
        int sub=solve(nums,target,i+1,sum-nums[i]);

        return add+sub;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        
        return solve(nums,target, 0, 0);
    }
};