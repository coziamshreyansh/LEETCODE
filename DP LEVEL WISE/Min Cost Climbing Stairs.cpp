class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        unordered_map <int, int> memo;
        
        int ans1 = cost1(cost, 0, memo);
        int ans2 = cost1(cost, 1, memo);
        return min(ans1, ans2);
        
    }
    int cost1(vector<int> &cost, int i, unordered_map <int, int> &memo)
    {
        if(i == cost.size())
            return 0;
        if(i > cost.size())
            return 1000; // 1000 is max value, which an array elemnet cant have
        if(memo.find(i) != memo.end())
            return memo[i];
        int onestep = cost[i] + cost1(cost, i+1, memo);
        int twostep = cost[i] + cost1(cost, i+2, memo);
        memo[i] = min(onestep, twostep);
        return min(onestep, twostep);
    }
};
