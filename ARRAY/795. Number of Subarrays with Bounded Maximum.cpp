class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {
        int size = nums.size();
        int i=0, j=0, m=0, count=0;
        
        for(j = 0; j<size; j++){
            if(nums[j]>=left && nums[j]<=right){
                    m = j-i+1; count+=m;
            }
            else if(nums[j] < left){
                count+=m; // add prev no. of sub arrays only dont take nums[j] individually if its lesser than range
            }
            else if(nums[j] > right)// slide window till j and do m = 0
            {
                m = 0;
                i = j+1;
            }
        }
        return count;
    }
};
