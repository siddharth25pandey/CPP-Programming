class Solution {
public:
    bool f(vector<int>& nums, int s) {
       bool dp[s + 1];
       memset(dp, false, sizeof(dp));
       dp[0] = true; 
       for(auto &j : nums) {
           for(int i=s;i>=j;i--) dp[i] = dp[i] or dp[i -j];
       }
        
       return dp[s];
    }
    
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(int n : nums) sum += n;
        
        return (sum%2 == 0) ? f(nums, sum/2) : false;
    }
};