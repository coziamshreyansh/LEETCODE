class Solution {
public:
    void solve(vector<vector<char>>& board) {
        // approach is to iterate to the boundary elements and mark all boundary 'O'
//         as 'a' as well as all the connnected 'O' with boundary 'O' them also 'a'
//         Now iterate through the left 'O's and mark them as 'X'
//     And when you are done with this, change a to O again
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                if(i == 0 || i == board.size()-1 || j == 0 || j == board[0].size()-1)
                {
                    if(board[i][j] == 'O')
                    {
                        dfs(i, j, board);
                    }
                }
            }
        }
        // here fill remaining 0's with X
         for(int i=0; i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                
                    if(board[i][j] == 'O')
                    {
                       board[i][j] = 'X';
                    }
               
            }
        }
        for(int i=0; i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                
                    if(board[i][j] == 'R')
                    {
                       board[i][j] = 'O';
                    }
               
            }
        }
    
    }
    void dfs(int i, int j,vector<vector<char>>& board)
    {
        board[i][j] = 'R';
        if(i-1 > 0 && board[i-1][j]=='O')
        {
            dfs(i-1, j, board);
        }
        if(j-1 > 0 && board[i][j-1]=='O')
        {
            dfs(i, j-1, board);
        }
        if(i+1 < board.size()-1 && board[i+1][j]=='O')
        {
            dfs(i+1, j, board);
        }
        if(j+1 < board[0].size()-1 && board[i][j+1]=='O')
        {
            dfs(i, j+1, board);
        }
        
    }
      
       
};
