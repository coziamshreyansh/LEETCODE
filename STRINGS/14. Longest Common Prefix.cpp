// 8ms
class Solution {
public:
    string LCP(string one, string two)
    {
        string ans = ""; int  i = 0, j = 0;
        while(i < one.size() && j < two.size())
        {
            if(one[i] == two[j])
            {
                ans += one[i];
                i++; j++;
            }
            else
                break;
        }
        return ans;    
    }
    string longestCommonPrefix(vector<string>& strs) {
        // substrs(words) in case of vector are accessed through index
        string curr_ans = strs[0]; 
        for(int i = 1; i < strs.size(); i++) // loop will run from 2nd word
        {
            curr_ans = LCP(curr_ans, strs[i]);
        }
        return curr_ans;
    }
};
