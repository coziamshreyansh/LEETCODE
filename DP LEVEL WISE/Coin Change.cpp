class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<vector<int>> dp(coins.size()+1, vector<int>(amount+1, -1));
        int ans = minpossiblecoins(coins, amount, 0, dp);
        if(ans >= 100000)
            return -1;    
        return ans;
      
        
    }
    
    int minpossiblecoins(vector<int> &coins,int amount, int i, vector<vector<int>> &dp)
    {
        if(amount == 0)
           return 0;
        if(i >= coins.size())
            return 100000;
       if(dp[i][amount] != -1)
           return dp[i][amount];
        
        int consider = 100000;
        if(coins[i] <= amount)
        {
            consider = 1 + minpossiblecoins(coins, amount-coins[i], i, dp);
        }
        int notconsider = minpossiblecoins(coins, amount, i+1, dp);
        dp[i][amount] = min(consider, notconsider);
        return dp[i][amount];
        

    }
};
