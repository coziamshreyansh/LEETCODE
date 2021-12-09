class Solution {
public:
    int numDecodings(string s) {
        int size = s.size();
        // // if first element is 0
        // if(s[0] == '0')
        // {
        //     return 0;
        // }
        // // if two contd. 0's found then encoding isnt possible
        // for(int i=0; i<size-1; i++)
        // {
        //     if(s[i] == '0' && s[i+1] == '0')
        //     {
        //         return 0;
        //     }
        // }
        // // if last element is 0 and prev element is > 2 then also encoding isnt possible coz only 10 & 20 can exist 
        // if(size >= 2 && s[size-1]=='0' && s[size-2] > 2)
        // {
        //     return 0;
        // }
        if(size == 0 || s[0]=='0')  return 0;
        if(s.length() == 1)   return 1;
        int num1, num_combi;
        int count1 = 1, count2 = 1; int count;
        for(int i=1; i<s.length(); i++)
        {   
            count = 0;
            num1 = s[i] - '0';
            num_combi = (s[i-1]-'0')*10 + num1;
            if(num1 > 0) count+=count2;
            if(num_combi >= 10 && num_combi <= 26) count += count1;
            count1 = count2;
            count2 = count;
        }
        return count2;
      }
};
