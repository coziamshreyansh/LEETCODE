class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        unordered_map<string , int> memo;
        return ways(nums, 0, target, memo);
    }
    int ways(vector<int> &nums, int idx, int target, unordered_map<string , int> &memo)
    {
        if(target == 0 && idx >= nums.size())
            return 1;
        if(target != 0 && idx >= nums.size())
            return 0;
        string curr =  to_string(idx)+"_" + to_string(target);
        if(memo.find(curr) != memo.end())
            return memo[curr];
        
        
        int positive = ways(nums, idx+1, target-nums[idx], memo);
        int negative = ways(nums, idx+1, target+nums[idx], memo);
        memo[curr] = positive + negative;
        return memo[curr];
    }
};
