// 4ms O(N) time O(2N) SPACE
class Solution {
public:
    int trap(vector<int>& height) {
        int result = 0;
        int size = height.size();
        if(size <= 2)
        {
            return 0;
        }
        int pre_max[size], sufix_max[size];
        // for pre_max
        pre_max[0] = height[0];
        for(int i = 1; i < size; i++)
        {
            pre_max[i] = max(pre_max[i-1], height[i]);
        }
        // for suffix max
        sufix_max[size-1] = height[size-1];
        for(int i = size-2; i >= 0; i--)
        {
            sufix_max[i] = max(sufix_max[i+1], height[i]);
        }
        //focusing on calculations
        for(int i =0; i < size; i++)
        {
            result += (min(pre_max[i], sufix_max[i]) - height[i]);
        }
        return result;
    }
};
