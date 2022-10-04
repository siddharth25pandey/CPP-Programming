class Solution {
public:
    int rec(int idx,int st,int end,vector<int>& nums,vector<int>& multi,vector<vector<int>> &dp){
        if(idx==multi.size()) return 0;
        if(dp[idx][st]!=INT_MIN) return dp[idx][st];
        int ans=INT_MIN;
        ans= max(multi[idx]*nums[st] + rec(idx+1,st+1,end,nums,multi,dp),
                multi[idx]*nums[end] + rec(idx+1,st,end-1,nums,multi,dp));
        return dp[idx][st]= ans;
    }
    int maximumScore(vector<int>& nums, vector<int>& multi) {
        vector<vector<int>> dp(multi.size(),vector<int>(multi.size(),INT_MIN));
        return rec(0,0,nums.size()-1,nums,multi,dp);
    }
};
