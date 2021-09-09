class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& arr) {
       int row = arr.size();
        int col = arr[0].size();
        vector<int> ans;
        if(row == 1 && col == 1){ans.push_back(arr[0][0]); return ans;} 
        int left = 0; int right = col-1;
        int top = 0; int down = row-1;
        int dir = 0; int i;
        while(top<=down && left <=right){
            if(dir == 0) // L to R
            {
                for(i = left; i <= right; i++){
                    ans.push_back(arr[top][i]);
                        
                }
                 top++;
            }
            else if(dir == 1) // T to D
            {
                for(i = top; i <= down; i++){
                    ans.push_back(arr[i][right]);
                    
                }
                right--;
            }
            else if(dir == 2) // R to L
            {
                for(i = right; i>=left; i--){
                    ans.push_back(arr[down][i]);
                     
                }
                 down--;   
               
            }
            else if(dir == 3) // D to T
            {
                for(i = down; i>=top; i--){
                    ans.push_back(arr[i][left]);
                    
                }
                left++;
            }
            dir=(dir+1)%4;
        }
        return ans;
                               
    }
};
