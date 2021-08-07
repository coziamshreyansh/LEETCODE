// O(row*col) used pair of map coz map stores distinct values
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        map<pair<int,int>,int> rowcol;
        int rows = matrix.size();
        int cols = matrix[0].size();
        for(int i = 0; i < rows; i++)
        {
            for(int j = 0; j < cols; j++)
            {
                if(matrix[i][j] == 0)
                {
                    rowcol[{i,j}] = 0;
                }
            }
        }
        int drow, dcol; int i,j;
        for(auto it = rowcol.begin(); it != rowcol.end(); it++)
        {
            pair<int,int> temp = it->first;
            drow =  temp.first, dcol = temp.second;
            // for fixed col
            i = 0 , j = 0;
            while(i < rows)
            {
                matrix[i][dcol] = 0;
                i++;
            }
            // for fixed row
            while(j < cols)
            {
                matrix[drow][j] = 0;
                j++;
            }
        }
        
    }
};
