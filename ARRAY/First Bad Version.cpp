// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

//////////1760 ms
class Solution {
public:
    int firstBadVersion(int n) {
     while(n--)
     {
         if(!isBadVersion(n))
         {
             return n+1;
         }
     }
        return n;
    }
};
//////// 0ms
class Solution {
public:
    int firstBadVersion(int n) {
        long long int start = 1;
        long long int end = n;
       int mid;
     while(start < end)
     {
         mid = (start + end)/2;
         if(isBadVersion(mid))
         {
             end = mid;
         }
         else
         {
             start = mid+1;
         }
     }
        return end;
       
    }
};
