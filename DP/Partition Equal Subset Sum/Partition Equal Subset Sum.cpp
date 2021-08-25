class Solution{
public:
    int subsetsum(int size, int *arr, int sum){
        int dp[size+1][sum+1];
        // filling first col
        for(int i=0;i<=size;i++){
            dp[i][0] = 1;
        }
        //filling first row expect where col = 0 coz when sum = 0 and  size= 0
        for(int i=1; i<=sum;i++){
            dp[0][i] = 0;
        }
        //choices
        for(int i = 1; i<=size; i++){
            for(int j=1;j<=sum;j++){
                if(j >= arr[i-1]){
                    dp[i][j]= max(dp[i-1][j-arr[i-1]],dp[i-1][j]);
                }
                else{
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[size][sum];
        
    }
    int equalPartition(int N, int arr[])
    {
        //array elements sum
        int sum = 0;
        for(int i = 0; i<N; i++){
            sum += arr[i];
        }
        if(sum % 2 != 0){
            return 0;
        }
        else {
            return subsetsum(N, arr, sum/2);
        }
    }
};
