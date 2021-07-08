class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ones;
        
        if( n >= 0)
        {
            ones.push_back(0); 
        }
        if(n >= 1)
        {
            ones.push_back(1);
        }
        int i = 2;
        while(i <= n)
        {
            if( i%2 == 0)
            {
                ones.push_back(ones[i/2]);
            }
            else 
            {
               
                ones.push_back(1 + ones[i/2]);
            }
            i++;
        }
       
             return ones;
    }
};
