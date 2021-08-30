int minCoins(int coins[], int M, int V) 
	{ 
	    int dp[M+1][V+1]; 
	    //edge cases 
	   // if(M == 1){ if(coins[0] == V){ return 1;} else{return -1;}}
	   // if(M == 2){
	       
	   //    if(coins[0] == V || coins[1]== V){ return 1;}
	   //    if((coins[0] + coins[1]) == V ){return 2;} 
	   //    else{return -1;}
	   //           }
	    // base cases
	   // for (int i = 0; i <= V; ++i)
	   // {
	   // 	/* code */
	   // 	dp[0][i] = INT_MAX-1; //size = 0, sum <= V
	   // }
	   // for (int i = 1; i <= M; ++i)
	   // {
	   // 	/* code */
	   // 	dp[i][0] = 0; // when sum = 0
	   // }
	   // // special base case i.e, for r0w 1
	   // for (int i = 1; i <= V; ++i)
	   // {
	   // 	/* code */
	   // 	if(i % coins[0] == 0){
 			// 	dp[1][i] = i/coins[0];
	   // 	}
	   // 	else { dp[1][i] = INT_MAX-1;}
	   // }
	   for (int i = 0; i <= M; i++) {
		for (int j = 0; j <= V; j++) {
			if (j == 0)
				dp[i][j] = 0;
			if (i == 0)
				dp[i][j] = INT_MAX-1;
			if (i == 1) {
				if (j % coins[i - 1] == 0)
					dp[i][j] = j / coins[i - 1];
				else
					dp[i][j] = INT_MAX-1;
			}
		}
	}
	    dp[0][0] = 0;
	    for (int i = 1; i <= M; ++i)
	    {
	    	for (int j = 1; j <= V; ++j)
	    	{
	    		if(coins[i-1] <= j){
	    			dp[i][j] = min(1+dp[i][j-coins[i-1]], dp[i-1][j]);
	    		}
	    		else{dp[i][j] = dp[i-1][j];}
	    	}
	    }
	    if(dp[M][V] > V)
	    {return -1;}
	    else{
	        return dp[M][V];
	    }
	    
	}
