//16 ms two pointer approach
class Solution {
public:
    string longestPalindrome(string s) {
        int low, high;
        int start = 0, end = 1;
        
        int size = s.size();
        if(size <= 1)
        {
            string ans;
            ans = s[0];
            return ans;
        }
        for(int i = 1; i < size; i++)
        {
            // even length
             low = i-1, high = i;
            while(low >= 0 && high < size && s[low] == s[high])
            {
                if(high - low + 1 > end) //high - low + 1 is lenght of subs str
                { 
                    start = low;
                    end = high - low + 1;                
                }
                low--; high++;
            }
            // odd length
            low = i-1, high = i+1;
            while(low >= 0 && high < size && s[low] == s[high])
            {
                if(high - low + 1 > end) //high - low + 1 is lenght of subs str
                { 
                    start = low;
                    end = high - low + 1;                
                }
                low--; high++;
            }
        }
        string ans;
        ans = s.substr(start, end);
        return ans;
        
    }
};
