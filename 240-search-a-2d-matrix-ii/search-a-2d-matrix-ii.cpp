class Solution {
public:
    bool solve(vector<vector<int>>& matrix, int target,int row,int col,int rowsize,int colsize){

       if(row < 0 || col < 0 || row >= rowsize || col >= colsize){
     return false;
}
        if(matrix[row][col]==target){
            return true;
        }
       else if(matrix[row][col]>target){
            
            return solve(matrix,target,row,col-1,rowsize,colsize);
        }
        else{

            return solve(matrix,target,row+1,col,rowsize,colsize);
        }
        

        return true;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        if(matrix.empty()||matrix[0].empty()){
            return false;
        }
        
        int rowsize=matrix.size();
        int colsize=matrix[0].size();
      //  bool ans=false;

        

       return  solve(matrix,target,0,colsize-1,rowsize,colsize);

        
    }
};