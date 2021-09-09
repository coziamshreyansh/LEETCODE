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
