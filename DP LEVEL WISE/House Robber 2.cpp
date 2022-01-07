class Solution {
public:
    int rob(vector<int>& nums) {
        unordered_map<int, int> memo1;
        unordered_map<int, int> memo2;
        int ans2 = 0 +  robbery(0+1, nums, memo2, nums.size());
        int ans1 =nums[0] + robbery(0+2, nums, memo1, nums.size()-1);
        return max(ans1, ans2);
    }
    int robbery(int idx,vector<int> &nums, unordered_map<int, int> &memo1, int size){
        if(idx >= size) return 0;
         if(memo1.find(idx) != memo1.end()) return memo1[idx];
        
        
        
        int rob = nums[idx] + robbery(idx+2, nums, memo1, size);
        int norob = robbery(idx+1, nums, memo1, size);
        memo1[idx]=max(rob, norob);
        return memo1[idx];
    }
   
};
