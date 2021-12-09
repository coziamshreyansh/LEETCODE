class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int col = matrix[0].size();
        int row = matrix.size();
        int mid; int start=0, end = (col*row)-1;
        while(start <= end)
        {
            mid = (start+(end-start)/2);
            if(matrix[mid/col][mid%col] == target)
            {
                return true;
            }
            else if(matrix[mid/col][mid%col] < target)
            {
                start = mid+1;
            }
            else 
            {
                end = mid-1;
            }
        }
        return false;
    }
};
