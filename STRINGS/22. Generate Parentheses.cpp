// 4ms Aditya Verma added in notes
class Solution {
public:
    void calledrec(int open, int close, string s, vector<string> &v)
    {
        if(open == 0 && close== 0)
        {
            v.push_back(s);
            return;
        }
        if(open > 0)
        {
            calledrec(open-1, close, s+"(", v);
            
        }
        if(close > open)
        {
            calledrec(open, close-1, s+")", v);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> s;
        
        calledrec(n, n, "", s);
        return s;
    }
};
