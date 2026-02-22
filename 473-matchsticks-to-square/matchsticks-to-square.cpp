class Solution {
public:

    bool solve(vector<int>& matchsticks, vector<int>& sidesum, int i){

        if(i == matchsticks.size())
            return true;

        for(int j = 0; j < 4; j++){

            // Skip duplicate states
            if(j > 0 && sidesum[j] == sidesum[j-1])
                continue;

            if(sidesum[j] >= matchsticks[i]){

                sidesum[j] -= matchsticks[i];

                if(solve(matchsticks, sidesum, i+1))
                    return true;

                sidesum[j] += matchsticks[i];
            }
        }

        return false;
    }

    bool makesquare(vector<int>& matchsticks) {

        if(matchsticks.size() < 4) return false;

        int sum = accumulate(matchsticks.begin(), matchsticks.end(), 0);

        if(sum % 4 != 0) return false;

        sort(matchsticks.rbegin(), matchsticks.rend());  // Important

        int side = sum / 4;

        vector<int> sidesum(4, side);

        return solve(matchsticks, sidesum, 0);
    }
};