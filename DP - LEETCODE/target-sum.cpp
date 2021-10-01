#include<bits/stdc++.h>


class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        //basically target is difference of subsets
        //so we need to ocunt no of possible subsetwith given difference..
        
        /*
        S1 - S2 = target
        S1 + S2  = sum(nums)
        so S1 = [ target + sum(nums) ]//2
        
        
        //now we need to find no of subsets with given sum S1..
        
        */
        
        int sum = accumulate(nums.begin(),nums.end(),0);
        int s1 = (target + sum)/2;
        
        
        //s1 should not in fraction it shud be integer.
        
        if((target + sum)%2!=0){
            return 0;
        }
        
        
        //secondly s1 should be positive bcz we are considering array of isze s1, what if s1<0.
        
        if(s1<0){
            s1 = abs(s1);
        }
        
        
        int m = nums.size()+1;
        int n = s1+1;
        vector<vector<int> >dp(m, vector<int>(n,-1));
        
        for(int j = 0;j<n;j++){
            dp[0][j] = 0;
        }
        for(int i = 0;i<m;i++){
            dp[i][0] = 1;
        }
        
        for(int i = 1;i<m;i++){
            for(int j = 0;j<n;j++){             //j should begin wih zero
                if(nums[i-1]<=j){
                    dp[i][j] = dp[i-1][j] + dp[i-1][j-nums[i-1]];
                }
                else{
                    dp[i][j] = dp[i-1][j];
                }
            
            }
        }
        // for(int i = 0;i<m;i++){
        //     for(int j = 0;j<n;j++){
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        
        return dp[m-1][n-1];
        
    }
};