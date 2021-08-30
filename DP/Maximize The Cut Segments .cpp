int maximizeTheCuts(int n, int x, int y, int z)
    {
        //Your code here
        int dp[n+1];
        dp[0] = 0;
        for(int i = 1; i <= n; i++){
            dp[i] = -1;
            if(i - x >= 0){dp[i] = max(dp[i-x], dp[i]);}
            if(i - y >= 0){dp[i] = max(dp[i-y], dp[i]);}
            if(i - z >= 0){dp[i] = max(dp[i-z], dp[i]);}
            if(dp[i] != -1){dp[i]++;} 
            
        }
        // if we get negative ans return 0 simply
        return max(dp[n], 0);
        
    }
