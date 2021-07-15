class Solution {
public:
    bool dfs(int start, vector<vector<int>>& prerequisites , bool *visited, bool *path)
    {
        visited[start] = true;
        path[start] = true;
        for(auto nbr : prerequisites[start])
        {
            if(path[nbr] == true)
            {
                return true;
            }
            else if(!visited[nbr])
              {  
                bool cycle_mila = dfs(nbr, prerequisites, visited, path);
                if(cycle_mila)
                {
                    return true;
                }
              }
        }
        path[start] = false;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        bool visited[numCourses];
        
        bool path[numCourses];
        for(int i = 0; i<numCourses; ++i)
        {
            path[i] = false;
           visited[i] = false;
        }
        return dfs(0, prerequisites, visited, path);
        
        
        
    }
};
