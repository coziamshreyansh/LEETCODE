// O(N) space
class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int size = nums.size();
        int *fwdsum = new int[size];
        int *bwdsum = new int[size];
        int index1=0; int index2=size-1; int currsum1=0, currsum2 = 0;
        while(index1 < size && index2 >= 0){
            currsum1+=nums[index1];
            fwdsum[index1] = currsum1;
            currsum2+=nums[index2];
            bwdsum[index2]=currsum2;
            index1++; index2--;
        }
        vector<int> ans(size);
        int currans;
        for(int i=0; i<size;i++){
            if(i!=0 && i!=size-1){
                currans = bwdsum[i]-((size-i)*nums[i]) + ((i+1)*nums[i])-fwdsum[i];
                ans[i] = currans;
            }
            else if(i==0){
                currans = bwdsum[i]-((size-i)*nums[i]);
                ans[i] = currans;
            }
            else if(i == size-1){
                currans = ((i+1)*nums[i])-fwdsum[i];
                ans[i] = currans;
            }
        }
        return ans;
    }
};
//////////O(1) space
class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n = nums.size();
        int total_sum = 0;
        vector<int> result(n, 0);
 
        for(int i=0; i<n; i++) {
            total_sum += nums[i];
        }
 
        int curr_sum = 0;
        for(int i=0; i<n; i++) {
            curr_sum += nums[i];
 
            int before_index_sum = (nums[i] * (i+1) - curr_sum);
            int after_index_sum = abs(nums[i]*(n-i-1) - (total_sum - curr_sum));
 
            result[i] = (before_index_sum) + (after_index_sum);
        }
 
 
        return result;
    }
};
