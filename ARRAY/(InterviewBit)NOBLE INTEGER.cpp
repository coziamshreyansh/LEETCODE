int Solution::solve(vector<int> &A) {
    sort(A.begin(), A.end());
    int ans = -1;
    for(int i=0;i<A.size(); i++)
    {
        // check duplicates(if duplicate exists then we start calc size-i-1 from last occurence of duplicate number)
        if(i<A.size()-1 && A[i]==A[i+1]) continue;
        if(A.size()-i-1 == A[i])
        {
            ans = 1;
            break;
        }
    }
    return ans;
}
