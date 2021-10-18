class Solution {
public:
    void permute(int n, vector<vector<int>> &ans, vector<int> &ds, vector<int> &freq, vector<int> &arr)
    {
        if(ds.size() == n)
        {
            ans.push_back(ds);
            return;
        }
        for(int i=0; i<n; i++)
        {
            if(!freq[i])
            {
                freq[i]=1;
                ds.push_back(arr[i]);
                permute(n, ans, ds, freq, arr);
                freq[i]=0;
                ds.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& arr) {
        vector<vector<int>> ans;
        vector<int> ds;
        int n= arr.size();
        vector<int> freq(n, 0);
        permute(n, ans,ds, freq, arr);
        return ans;
    }
};
