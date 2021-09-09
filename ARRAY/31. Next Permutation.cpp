class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int size = nums.size();
        if(size == 1){return ;}
        if(size == 2){swap(nums[0], nums[1]); return;}
        int index1 = -1;
        for(int i = size-1; i>0; i--){
            if(nums[i-1] < nums[i]){
                index1 = i; break;
            }
        }
        if(index1 == -1){
                reverse(nums.begin(), nums.end());
            return ;
        }
        else{
            int prev = index1;
            
            for(int i =index1+1; i<size; i++){
                if(nums[index1-1] < nums[i] && nums[prev]>=nums[i]){
                    prev = i;
                }
            }
            swap(nums[prev],nums[index1-1]);
            reverse(nums.begin()+index1, nums.end());
            return;
        }
    }
};
