// 8ms
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int size = s.size();
        if(size == 0) return 0;
        if(size==1) return 1;
        int len = 0; int right = 0, left = 0;
        vector<bool> visited(256);
        visited[s[left]] = true;
        while(right != size-1)
        {
            if(visited[s[right+1]] != true)
            {
                right++;
                visited[s[right]] =  true;
                len = max(len, right-left+1);
                
            }
            else
            {
                visited[s[left]] = false;
                left++;
            }
        }
        return len;
    }
};
