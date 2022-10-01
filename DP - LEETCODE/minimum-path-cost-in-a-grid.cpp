class Solution {
public:
      int sid(vector<vector<int>>&v,vector<vector<int>>&moveCost,int r,int c,vector<vector<int>>&dp){
        if(r<0 or r>=v.size() or c<0 or c>=v[0].size()){
            return 1e5;
        }
        if(r==v.size()-1){
            return v[r][c];
        }
         if(dp[r][c]!=-1){
             return dp[r][c];
         }
        int ans=1e5;
        vector<int>m=moveCost[v[r][c]];
        for(int i=0;i<m.size();i++){
            ans=min(ans,v[r][c]+m[i]+sid(v,moveCost,r+1,i,dp));
        }
        return dp[r][c]= ans;
    }
    int minPathCost(vector<vector<int>>& grid, vector<vector<int>>& moveCost) {
        vector<vector<int>>dp(grid.size(),vector<int>(grid[0].size(),-1));
        int ans=1e5;
        for(int j=0;j<grid[0].size();j++){
            ans=min(ans,sid(grid,moveCost,0,j,dp));
        }
        return ans;
    }
};