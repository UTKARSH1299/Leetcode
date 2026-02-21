class Solution {
public:

    bool solve(vector<vector<char>>& board,string word,int row,int cols,int index){

        if(word.size()==index){
            return true;
        }

        if(row<0 || cols<0 ||cols>=board[0].size()||row>=board.size()||board[row][cols]!=word[index]){
            return false;
        }

        char temp = board[row][cols];

        board[row][cols]='%';
        bool found=solve(board,word,row-1,cols,index+1) // up
        || solve(board,word,row+1,cols,index+1) // down
        || solve(board,word,row,cols+1,index+1) //right
        || solve(board,word,row,cols-1,index+1); //left

        board[row][cols]=temp;

      return found;
    }
    bool exist(vector<vector<char>>& board, string word) {
        
        // int rowSize=board.size();
        // int colsSize=board[0].size();
        
        for(int i=0; i<board.size(); i++){
            for(int j=0; j<board[0].size(); j++){
                if(solve(board,word,i,j,0)){
                    return true;
                }
            }
        }

        return false;
    }
};