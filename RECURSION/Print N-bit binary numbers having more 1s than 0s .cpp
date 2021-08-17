class Solution{
public:	
    void solve(int n, vector<string>& ans, int zeroes, int ones, string curr){
        if(n == 0){
            ans.push_back(curr);
            curr.erase(curr.begin(),curr.end());
            return;
        }
        string op1 = curr;
        string op2 = curr;
         op1 += '1';
            solve(n-1, ans, zeroes, ones+1, op1);
        if(ones > zeroes){
            op2 += '0';
            solve(n-1, ans, zeroes+1, ones, op2);
            return;
        }
        
             
        
        
    }
	vector<string> NBitBinary(int n)
	{
	    // Your code goes here
	    vector<string> ans;
	    int zeroes = 0, ones = 0;
	    string curr = "";
	    solve(n, ans, zeroes, ones, curr);
	    return ans;
	}
};
