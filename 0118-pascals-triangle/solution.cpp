class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows <= 1) return {{numRows}};
        vector<vector<int>> dp(numRows);
        dp[0] = {1};
        dp[1] = {1,1};

        for(int j = 2; j < numRows; j++){
            auto& t = dp[j -1];

            vector<int> row(t.size()+1, 1);

            for(int i = 1; i < row.size() - 1; i++){
                row[i] = t[i] + t[i-1];
            }
            dp[j] = row;
        }

        return dp;
    
        


    }
};
