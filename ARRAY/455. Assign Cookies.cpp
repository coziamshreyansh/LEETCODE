class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
       int nchild = g.size();
       int bag = s.size();
       
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        // two pointers
        int i=0; // for child array
        int j=0; // for bag array
        int ans=0;
        while(i<nchild && j<bag)
        {
            if(s[j] >= g[i])  
//you can move to next index of children array only if you satisfies current. Coz array is sorted and if you cant satisfy current child from cookie, how you gonna satisfy next child whose greed is even greater
            {
                i++; ans++;
            }
            j++;
        }
        return ans;
        
    }
};
