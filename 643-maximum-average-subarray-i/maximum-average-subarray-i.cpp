class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i=0;
        int j=k-1;
        int sum=0;

//step 1;
        for(int i=0; i<=j; i++){
          sum=sum+nums[i];
        }
        int maxSum=sum;

        while(j<nums.size()-1){
            sum=sum-nums[i];
            i++;
            j++;
            sum=sum+nums[j];

            maxSum=max(maxSum,sum);
        }
        return maxSum/(double)k;
    }
};