class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        // max satistfied = directly satis + secretly satis 
        // secretly sat people will come in those 3 mins when owner isnt grumpy
        // at consecutive minutes owner will not be grumpy 
        // so using sliding window technique and puttting window on subarrays consecutively
        // hence finding secretly satisfied customers by adding all which lies in window
        int size = customers.size();
        int directly_sat = 0; // when grumpy[i] = 0
        for(int i=0; i<size;i++){
            if(!grumpy[i]){
                directly_sat+=customers[i];
                customers[i] = 0; // since they are directly satisfied no point of adding them                                        //further in secret
            }
        }
        int secretly_sat = 0;
        int range = minutes; int sum=0;
        int left = 0;
        for(int i=0; i<size; i++){
            sum+=customers[i]; 
            if(i-left == range){
                sum -= customers[left++];
               
                
                
            }
            secretly_sat = max(sum, secretly_sat);
        }
        return secretly_sat + directly_sat;
    }
};
