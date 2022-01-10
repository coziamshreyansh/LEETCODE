class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<vector<int>> dp(coins.size()+1, vector<int>(amount+1, -1));
        return ways(0, coins, amount, dp);
    }
    int ways(int i, vector<int> &coins, int amount, vector<vector<int>> &dp)
    {
        if(amount == 0)
            return 1;
        if(i >= coins.size())
            return 0;
        if(dp[i][amount] != -1)
            return dp[i][amount];
        int way1 = 0;
        if(coins[i] <= amount)
            way1 = ways(i, coins, amount - coins[i], dp);
        int way2 = ways(i+1, coins, amount, dp);
        
        
        dp[i][amount] = way1 + way2;
        return dp[i][amount];
         
    }
};
