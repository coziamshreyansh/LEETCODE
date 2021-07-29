// 16 ms
#define pb push_back
class Solution {
public:
    string convert(string s, int numRows) {
        int i = 0;
        int size = s.length();
        vector<string> v(numRows, "");
        while(i < size)
        {
            for(int j = 0; j < numRows && i < size; j++)
            {
                v[j].pb(s[i++]);
            }
            for(int j = numRows-2; j >= 1 && i < size; j--)
            {
                v[j].pb(s[i++]);
            }
        }
        string res = "";
        for(auto it : v)
        {
            res += it;
        }
        return res;
    }
};
