class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int n=arr.size();
        int x,y,z;
        int count=0;
        for(int i=0; i<n-2; i++){
            for(int j=i+1; j<n-1; j++){
                for(int k=j+1; k<n; k++){

                     x=arr[i]-arr[j];
                     y=arr[j]-arr[k];
                     z=arr[i]-arr[k];
                     
                     if(x<0){
                        x=-1*x;
                     }
                     if(y<0){
                        y=-1*y;
                     }
                     if(z<0){
                        z=-1*z;
                     }


                   if(x<=a && y<=b && z<=c){
                       
                        count++;
                    }
                    
                }
            }
        }
        return count;
    }
};