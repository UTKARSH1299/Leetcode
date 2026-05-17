class Solution {
public:
    int prefixSum(vector<int>& nums){

        vector<int>lsum(nums.size(),0);
        vector<int>rsum(nums.size(),0);


        for(int i=1; i<nums.size();i++){

            lsum[i]=nums[i-1]+lsum[i-1];
        }
        for(int i=nums.size()-2; i>=0; i--){
            rsum[i]=nums[i+1]+rsum[i+1];

        }
        for(int i=0; i<nums.size(); i++){

            if(lsum[i]==rsum[i]){
                return i;
            }
             
        }
        return -1;
    }

   
    int pivotIndex(vector<int>& nums) {
        return prefixSum(nums);
    }
};