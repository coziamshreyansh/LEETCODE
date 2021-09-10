//////// O((n-k)*k) NOT OPTIMAL
class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
          int size = nums.size();
           int arbk = k;
        if(size == 1){return nums[0];}
        if(size == k){int count = 0; for(int i = 0;i<size;i++){count+=nums[i];} return count;}
        int sum = 0,answer = 0; int i = 0, j=size-1-k; int count = k; int index;
        while(j<size){
            index = j+1;
            while(count--){
                index = index%size;
                sum += nums[index];
                index++;
            }
            answer = max(answer, sum);
            sum = 0; count = k;j++;
        }
        return answer;
    }
};
///////// O(k) OPTIMAL 
class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
          int size = nums.size();
           int arbk = k;
        if(size == 1){return nums[0];}
        if(size == k){int count = 0; for(int i = 0;i<size;i++){count+=nums[i];} return count;}
        int sum =0;
        for(int i =size-k; i<size; i++){
            sum+=nums[i];
            
        }
        int temp =sum;
        
        for(int i=0; i<k; i++){
            temp+=nums[i];
            temp-=nums[size-k+i];
            sum = max(temp, sum);
        }
        return sum;
    }
};
