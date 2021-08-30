long long int count( int S[], int m, int n )
    {
       
        //code here.
        long long int dp[m+1][n+1];
        // handling base cases
        for (int i = 0; i <= n; ++i)
        {
        	/* code */
        	dp[0][i] = 0; // no sum is possible if size 0
        }
        for (int i = 1; i <= m; ++i)
        {
        	dp[i][0] = 1; // when sum==0 && szie!= 0 then there exist atleaat one way to obtain 0 sum i.e, NULL set
		}
        for (int i = 1; i <= m; ++i)
        {
        	for (int j = 1; j <= n; ++j)
        	{
        		/* code */
        		if(S[i-1] <= j){
        			dp[i][j] = dp[i][j-S[i-1]] + dp[i-1][j]; // no of ways so added 
        		}
        		else{
        			dp[i][j] = dp[i-1][j];
        		}
        	}
        }
        return dp[m][n];
    }
