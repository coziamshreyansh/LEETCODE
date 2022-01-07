class Solution {
public:
     int recursion(vector<int> &nums, int i, unordered_map<int , int> &memo)
    {
        if(i >= nums.size())
            {return 0;}
        if(memo.find(i) != memo.end())
            return memo[i];
        memo[i] = max(recursion(nums,i+1, memo) , nums[i] +  recursion(nums,i+2, memo));
        return memo[i];
    }
    int rob(vector<int>& nums) {
        unordered_map<int , int> memo;
        return recursion(nums, 0, memo);
    }
   
};
