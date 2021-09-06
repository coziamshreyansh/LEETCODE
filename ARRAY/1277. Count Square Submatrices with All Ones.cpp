class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int rows=  matrix.size();
        int columns= matrix[0].size();
        vector<vector<int>> dp((rows), vector<int> (columns));
        int nsquares = 0; int curr_sum;
        // base cases 
         for(int i=0; i<columns; ++i){
              dp[0][i] =   matrix[0][i];
             curr_sum = dp[0][i];
            nsquares += curr_sum;
         }
        for(int i=1; i<rows; ++i){
              dp[i][0] =  matrix[i][0];
            curr_sum = dp[i][0];
            nsquares += curr_sum;
        }
       
        for(int i=1; i<rows; ++i)
        {
            for(int j=1; j<columns; ++j)
            {
                if(matrix[i][j] == 1)
                   { dp[i][j] = 1 + min(dp[i-1][j],min(dp[i-1][j-1], dp[i][j-1]));}
                curr_sum = dp[i][j];
            nsquares += curr_sum;
                
            }
        }
        return nsquares;
    }
};
