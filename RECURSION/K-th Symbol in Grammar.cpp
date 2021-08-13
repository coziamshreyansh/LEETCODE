// aditya verma's approach
//observations 1: column size got doubled 2: 0 - col/2(mid) of n is equal to 0 - col of n-1 3: col/2 + 1 till col of n is inversion of  0 - col of n-1
class Solution {
public:
    int mid; int ans;
    int kthGrammar(int n, int k) {
        if(n == 1 && k == 1){
            return 0;
        }
        mid = pow(2, n-1)/2;
        
        if(mid >= k){
         ans =    kthGrammar(n-1, k);
        }else{
          ans =  !kthGrammar(n-1, k-mid);
        }
        return ans;
    }
};
