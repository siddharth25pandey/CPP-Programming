
//Leetcode Function 
//easy to Understand 
//TC - O(N^2)
//Mayank Gupta


class Solution
{
    public:

        int f(int ind, int prev_ind, vector<int> &nums, vector<vector< int>> &dp)
        {
            if (ind == nums.size()) return 0;
            if (dp[ind][prev_ind + 1] != -1) return dp[ind][prev_ind + 1];
            int len = 0 + f(ind + 1, prev_ind, nums, dp);	//nottake
            if (prev_ind == -1 || nums[ind] > nums[prev_ind])
            {
                len = max(len, 1 + f(ind + 1, ind, nums, dp));	//take
            }
            return dp[ind][prev_ind + 1] = len;
        }
    int lengthOfLIS(vector<int> &nums)
    {
        vector<vector < int>> dp(nums.size(), vector<int> (nums.size() + 1, -1));
        return f(0, -1, nums, dp);
    }
};
