class Solution {
public:
    bool isPerfectSquare(int num) {
        
        for(long int i=1; i<=num; i++){
            // for(int j=i; j<=num; j++){
                if(i*i==num){
                    i++;
                    return true;
                    
              //  }

            }
        }
        return false;
    }
};