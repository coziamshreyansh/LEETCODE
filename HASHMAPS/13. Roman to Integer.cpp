//8 ms O(nm)
class Solution {
public:
    int romanToInt(string s) {
        int len = s.size();
        map<char, int> numat;
        numat.insert(make_pair('I',1));
        numat.insert(make_pair('V',5));
        numat.insert(make_pair('X',10));
        numat.insert(make_pair('L',50));
        numat.insert(make_pair('C',100));
        numat.insert(make_pair('D',500));
        numat.insert(make_pair('M',1000));
        int sum = 0, num;
        for(int i = 0; i<len; i++)
        {
            if(i == len-1 || numat[s[i]] >= numat[s[i+1]])
            {
                num = numat[s[i]];
                
            }
            else
            {
                num = numat[s[i+1]] - numat[s[i]];
                i = i+1;
            }
            sum += num;
        }
        return sum;
        
    }
};
