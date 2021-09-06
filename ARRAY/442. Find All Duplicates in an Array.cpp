////// O(N) TIME O(1) SPACE 
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        int size = nums.size();
        
       for(int i = 0; i < size; i++){
           if(nums[abs(nums[i])-1]>0){
               nums[abs(nums[i])-1] = -nums[abs(nums[i])-1];
           }
           else{
               ans.push_back(abs(nums[i]));
           }
       }
       
                            
        return ans;
    }
};


////////////// O(N) TIME AND SPACE 
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        int size = nums.size();
        map<int, int> frequency;
        
        for(int i = 0; i< size; i++){
            frequency[nums[i]]++;
            if(frequency[nums[i]] > 1){
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};
