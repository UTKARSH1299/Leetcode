class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    
    //reqirements

     int i=m-1;
     int j=n-1;

     int e=m+n-1;
    //base case

    while(i>=0 && j>=0){
        //jb nums[i]>nums[j] tb nums[e]=nums[i];

        if(nums1[i]>nums2[j]){
            nums1[e]=nums1[i];
            e--;
            i--;
        }
        else{
            nums1[e]=nums2[j];
            e--;
            j--;
        }

    }

    while(j>=0){
         nums1[e]=nums2[j];
            e--;
            j--;
    }


        
        
    }
};