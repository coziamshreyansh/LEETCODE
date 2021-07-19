//straight fwd ans 4ms 
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       bool input = next_permutation(nums.begin(),
                           nums.end());
        if(input == false)
        {
            sort(nums.begin(), nums.end());
        }
        else
        {
            return;
        }
    }
}
