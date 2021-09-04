class Solution
{ 
    public:
    int dp[1001][1001];
    //Function to find the length of longest common subsequence in two strings.
    int recursive(int x, int y, string s1, string s2){
        if( x==0 || y==0){
            return dp[x][y] = 0;
        }
        if(dp[x][y] != -1){
            return dp[x][y];
        }
        if(s1[x-1] == s2[y-1]){
            return dp[x][y] =  1+lcs(x-1, y-1,s1,s2);
        }
        else{
            return max(lcs(x,y-1,s1,s2) , lcs(x-1,y,s1,s2));
        }
    }
    int lcs(int x, int y, string s1, string s2)
    {
        // your code here
        
        memset(dp,-1,sizeof(dp));
        int ans = recursive(x, y,s1,s2);
        return ans;
        
        
    }
};
