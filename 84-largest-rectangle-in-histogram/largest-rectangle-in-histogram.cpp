class Solution {
public:

   void nextsmaller(vector<int>& heights,vector<int>&nextans){
    int n=heights.size();
    stack<int>st;
    st.push(-1);
    //int n=heights.size();

    for(int i=n-1; i>=0; i--){

        int element=heights[i];
      
      while(st.top()!=-1 && heights[st.top()]>=element){
        st.pop();
      }
      nextans.push_back(st.top());
      st.push(i);

    }
   }


    void prevsmaller(vector<int>& heights,vector<int>&prevans){
     
    stack<int>st;
    st.push(-1);
    int n=heights.size();

    for(int i=0; i<n; i++){

        int element=heights[i];
      
      while(st.top()!=-1 && heights[st.top()]>=element){
        st.pop();
      }
      prevans.push_back(st.top());
      st.push(i);

    }
   }
    int largestRectangleArea(vector<int>& heights) {
        vector<int>nextans;
        vector<int>prevans;
        //int n=heights.size();
        
        nextsmaller(heights,nextans);
        reverse(nextans.begin(),nextans.end());
        for(int i =0; i<nextans.size(); i++){

            if(nextans[i]==-1){
                nextans[i]=nextans.size();
            }
        }

         prevsmaller(heights,prevans);

        //  for(int i =0; i<prevans.size(); i++){

        //     if(prevans[i]==-1){
        //         prevans[i]=prevans.size();

        //     }
        //  }

         int maxarea=INT_MIN;

         for(int i=0; i<nextans.size(); i++){
            int width=nextans[i]-prevans[i]-1;
            int height=heights[i];
            int area=width*height;

            maxarea=max(maxarea,area);
         }

return maxarea;
    }
};