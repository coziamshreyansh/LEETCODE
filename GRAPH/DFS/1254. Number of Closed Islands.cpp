class Solution {
public:
    void dfs(vector<vector<int>>& grid, int value, int i, int j, int check)
    {
    if(i < 0 || j < 0 || i == grid.size() || j == grid[0].size() || grid[i][j] != check)
        {
            return ;
        }
        grid[i][j] = value; // value = -1 for open island cells & value = 2 for closed islands cells
        dfs(grid, value, i-1,j,check);
        dfs(grid, value, i+1,j,check);
        dfs(grid, value, i,j-1,check);
        dfs(grid, value, i,j+1,check);
    }
    int closedIsland(vector<vector<int>>& grid) {
        // pick boundary zeroes call dfs and update all 0's connected to boundary 0's as -1
        // so cell with -1 is open island
        // now go again and call dfs on remaining zeroes and mark them as 2 and count no of components
        // so cells with 2 are closed island(or a component of a closed island
        
        
        int row = grid.size();
        int col = grid[0].size();
        
        // checkfor boundary zeroes
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col;j++)
            {
                if( (i == 0 || j == 0 || i == row-1 || j == col-1) && grid[i][j] == 0)
                {
                    dfs(grid, -1, i, j, 0);
                }
                    
            }
        }
        
        // now we separated no. of open islands
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col;j++)
            {
                if(grid[i][j] == 0)
                {
                    
                    dfs(grid, 2, i, j, 0);
                    
                }
                    
            }
        }
        int ans =0;
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col;j++)
            {
                if(grid[i][j] == 2)
                {
                    ans++;
                    dfs(grid, 0, i, j, 2);
                    
                }
                    
            }
        }
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col;j++)
            {
                cout<<grid[i][j]<<" ";
                    
            }
            cout<<endl;
        }
        
        return ans;
        
    }
};
