class Solution {
public:
    void dfs(vector<vector<int>>& grid, int i, int j)
    {
        // if cell is a boundary element dont touch it
        if(i < 0 || i >= (grid.size()) || j < 0 || j >= (grid[0].size()))
        {
            return;
        }
        // dont touch if its not 1
        if(grid[i][j] != 1)
        {
            return;
        }
        grid[i][j] = -1; // change 1 to -1 if from that place path exists to boundary 1 
        // look at four sides
        dfs(grid, i+1, j);
        dfs(grid, i-1, j);
        dfs(grid, i, j+1);
        dfs(grid, i, j-1);
        
    }
    int numEnclaves(vector<vector<int>>& grid) {
        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(i == 0 || i == grid.size()-1 || j == 0 || j == grid[0].size()-1)
                {
                   dfs(grid, i, j);
                }
            }
        }
        int ans= 0; // so now we have no. of 1s as value '1' which are not connected till boundary
        for(int i=0; i<grid.size(); i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j] == 1)
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};
