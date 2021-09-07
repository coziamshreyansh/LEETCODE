class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int columns = matrix[0].size();
        int curr_r = 0; int curr_c = 0;
        vector<vector<int>> newM((rows), vector<int> (columns));
        for(int i = 0;i<columns; i++){
            
            for(int j = rows-1; j>=0; j--){
                newM[curr_r][curr_c] = matrix[j][i];
                curr_c++;
            }
            curr_r++;
            curr_c = 0;
        }
        
        for(int i = 0; i<rows; i++){
            for(int j=0; j<columns; j++){
                matrix[i][j] = newM[i][j];
            }
        }
    }
};
