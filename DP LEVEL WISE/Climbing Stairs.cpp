class Solution {
public:
    int climbStairs(int n) {
        unordered_map<int , int> memo;
        return total(0, n, memo);
    }
    int total(int cs, int t, unordered_map<int, int> &memo)
    {
        if( cs == t)
            return 1;
        if(cs > t)
            return 0;
        if(memo.find(cs) != memo.end())
            return memo[cs];
        int ways = total(cs+1, t, memo) + total(cs+2, t, memo);
        memo[cs] = ways;
        return ways;
    }
}; 
