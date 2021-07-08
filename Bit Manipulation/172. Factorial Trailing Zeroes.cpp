class Solution {
public:
    int trailingZeroes(int n) {
        int ans = 0;
         // check how many factors of 5 25 125... series are present in n
        int factors5 = 5;
        while((n/factors5) > 0)
        {
            ans += (n/factors5);
            factors5 = factors5 * 5; // we keep on inc p by p*5 to compute further
        }
        return ans;
    }
};
