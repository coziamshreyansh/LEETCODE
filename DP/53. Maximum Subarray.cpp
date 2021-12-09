class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
        int sum=0, max_sum=INT_MIN;
        for(int i:nums)
        {
            sum+=i;
            max_sum=max(sum, max_sum);
            if(sum < 0)
                sum = 0;
        }
        
        return max_sum;
    }
};
