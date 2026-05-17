class Solution {
public:

    int bruteforce(vector<int>& nums){
        
        int size=nums.size();
         
        for(int i=0; i<size; i++){
        int lsum=0;
        int rsum=0;
            //left sum
            for(int j=0; j<i; j++)
                lsum+=nums[j];
            
            //right sum

            for(int j=i+1; j<size; j++)
                rsum+=nums[j];
            

            if(lsum==rsum){
                return i;
            }

            cout<<"for index: "<<i<<" "<<"leftsum: "<<lsum<<" "<<"rsum :"<<rsum<<" "<<endl;
        }
        return -1;
    }
    int pivotIndex(vector<int>& nums) {
        return bruteforce(nums);
    }
};