
//brute force 264ms 83 MB
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int size = nums.size();
        int num = 1;
        int max = 0;
        for(int i = 0; i < size; i++)
        {
            if(nums[i] > max)
            {
                max = nums[i];
            }
        }
        while(num < max)
         {   
            if(!binary_search(nums.begin(), nums.end(), num))
           {
               return num;
           }
           num ++;
            
         }
       if(max<= 0)
       {
           return 1;
       }
        else
            return num+1;
        
        
           
        
                
          
      
        
    }
};
