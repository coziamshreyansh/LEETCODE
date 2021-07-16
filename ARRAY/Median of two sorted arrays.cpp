class Solution {
public:
   
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double x;
        // merging two sorted arrays O(n)
        int size1 = nums1.size();
        int size2 = nums2.size();
        vector<int> merged(size1+size2);
        int size = size1+size2;
       
        
        merge(nums1.begin(),nums1.end(), nums2.begin(), nums2.end(), merged.begin());
        if(size % 2 == 0)
        {
            x = merged[size/2] + merged[(size/2) - 1];
            x /= 2;
            return x;
        }
        else if( size % 2 != 0)
        {
            x = merged[size/2]; return x;
        }
        else
        {
            x = 0; return x;
        }
        
    } 
};
