class Solution {
public:
    int dp[200][200];
    int ans,m,n;
    
    int solve(vector<vector<int>>& mat, int i, int j, int prev){
	if(i < 0 || j < 0 || i >= n || j >= m || mat[i][j] <= prev) return 0;
	if(dp[i][j]) return dp[i][j];
	return dp[i][j] = 1 + max({ solve(mat, i + 1, j, mat[i][j]),
							    solve(mat, i - 1, j, mat[i][j]),
							    solve(mat, i, j + 1, mat[i][j]),
							    solve(mat, i, j - 1, mat[i][j]) });       
}
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        m=matrix[0].size(),n=matrix.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                ans=max(ans,solve(matrix,i,j,-1));
            }
        }
        return ans;
    }
};