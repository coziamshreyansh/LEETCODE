#include<climits>
class Solution {
public:
    int maxArea(vector<int>& height) {
    int left = 0, right = height.size()-1, area = INT_MIN;
        while(left < right)
        {
           if(height[left] < height[right])
           {
               area = max(area, (right-left)*height[left]);
               left++;
           }
            else if(height[right] < height[left])
            {
                area = max(area, (right-left)*height[right]);
                right--;
            }
            else
            {
                area = max(area, (right-left)*height[left]);
                if(height[left+1] > height[right-1])
                {
                    left++;
                }
                else
                {
                    right--;
                }
            }
        }
        return area;
    }
};
