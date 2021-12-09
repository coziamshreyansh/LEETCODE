class Solution {
public:
    int maxProfit(vector<int>& prices) {
        ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
        int min_buy = INT_MAX;
        int profit = 0;
        int max_profit = 0;
        for(int i=0; i<prices.size();i++)
        {
            if(min_buy > prices[i])
                min_buy = prices[i];
            profit = prices[i]-min_buy;
            max_profit = max(profit, max_profit);
        }
        return max_profit;
    }
};
