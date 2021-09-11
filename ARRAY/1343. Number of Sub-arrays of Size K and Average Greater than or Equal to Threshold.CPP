//O(N)
class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int size = arr.size();
        int t = k*threshold;
        int count = 0, sum = 0; int range = 0; int leftmost = 0;
        for(int i=0; i<size; i++){
            sum+=arr[i]; range++;
            if(range == k){
                if(sum >= t){
                    count++;
                }
                sum -= arr[leftmost]; range--; leftmost++;
            }
        }
        return count;
    }
};
