class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        map<string, vector<string>> m;
        string temp;
        int size = strs.size();
        for(int i= 0; i < size; i++)
        {
            temp = strs[i];
            sort(temp.begin(), temp.end());
            m[temp].push_back(strs[i]);
        }
        for(auto it = m.begin(); it != m.end(); it++)
        {
            result.push_back(it->second);
        }
        return result;
    }
};
