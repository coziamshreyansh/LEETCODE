class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int size = nums.size();
        if(size == 1 || size == 2){return true;}
        int max = nums[size-1];
        int count1  = 0;
         for(int i = size-2; i >= 0; i--){
                if(max >= nums[i]){
                    max = nums[i];
                }else {count1++;}
         }
         int count2 = 0; max= nums[0];
          for(int i =1; i<size; i++){
             if(max <= nums[i]){
                    max = nums[i];
                }else {count2++;}
          }  
          if(min(count1, count2) > 1){return false;}
          return true;
    }
};
