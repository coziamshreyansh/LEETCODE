vector<int> isSubsetSum(int N, int *arr, int sum){
        // code here
        
        // for(int i = 0; i <= N; i++){
        //     dp[i] = new bool[sum+1];
        // }
        
        bool dp[N+1][sum+1];
        // handling base cases 
        for (int i = 0; i <= N; i++) {
		for (int j = 0; j <= sum; j++) {
			if (i == 0)
				dp[i][j] = false;
			if (j == 0)
				dp[i][j] = true;
		}
     	}
        //handling choices 
        for(int i = 1; i <= N; i++){
            for(int j = 1; j<=sum; j++){
                if(j >= arr[i-1]){
                    dp[i][j] = max(dp[i-1][j-arr[i-1]],dp[i-1][j]);
                }
                else {
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        
        vector<int> possiblesum;
        int range = sum/2;
        
        for(int col = 0; col<=range; col++){
            if(dp[N][col]){
                possiblesum.push_back(col);
            }
        }
        return possiblesum;
        
        
    }
	int minDifference(int arr[], int n)  { 
	    // calc array sum
	    int sum = 0;
	    
	    for(int i = 0; i<n; i++){
	        sum += arr[i];
	    }
	    
	    
	    
	    vector<int> possiblesum = isSubsetSum(n, arr, sum);
	    
	    // fig out min diff excluding 0 as an ans
	    int ans = INT_MAX; 
	    for(int i=0; i<possiblesum.size(); i++){
	        
	            ans = min(ans , sum - (2*possiblesum[i]));}
	    
	    return ans;
	} 
