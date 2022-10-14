class Solution {
public:
    bool splitArraySameAverage(vector<int>& A) {
        if(A.size()<=1) {
            return false;
        }
        int n = A.size();
        int Sum = 0;
        for(auto x: A) Sum += x;
        
        int dp[Sum+1];
        memset(dp, 0, sizeof dp);
        dp[A[0]] = 2;
        for(int i=1; i<n; i++) {
            for(int s=Sum-A[i]; s>=0; s--) {
                if(dp[s])
                    dp[s+A[i]] |= (dp[s]<<1);
            }
            dp[A[i]] |= 2;
        }
        for(int len=1; len<n; len++) {
            if( (Sum*len)%n == 0 && ((1<<len) & dp[Sum*len/n])) {
                return true;
            }
        }
        return false;
    }
};
