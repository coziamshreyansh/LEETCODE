//4 ms
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int size = nums.size();
        if(size == 0 || !binary_search(nums.begin(), nums.end(), target))
        {
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }
        
        
        int start_index = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
       
            ans.push_back(start_index);
            int last_index = start_index;
            while(last_index < size)
            {
                last_index++;
                if(last_index < size)
                {
                    if(nums[last_index] != target)
                            break;
                }
                
            }
             last_index -= 1; 
            ans.push_back(last_index);
        
            
        
        return ans;
    }
};
