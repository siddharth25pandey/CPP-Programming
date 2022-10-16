#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 1e9;
#define inf2 2e18;

int mod = 1000000007;

long long solve(vector<vector<int>>& grid, int i, int j, int curr, int k, vector<vector<vector<int>>>& dp){
    if((i>=grid.size()) || (j >= grid[0].size())) return 0;
    if((i == (grid.size()-1)) && (j == (grid[0].size()-1)) && ((curr + grid[i][j])%k == 0)) return dp[i][j][curr] = 1;
    if(dp[i][j][curr] != -1) return dp[i][j][curr];
    return dp[i][j][curr] = (solve(grid, i+1, j, (curr + grid[i][j])%k, k, dp) + solve(grid, i, j+1, (curr + grid[i][j])%k, k, dp))%mod;
}

int numberOfPaths(vector<vector<int>>& grid, int k) {
    vector<vector<vector<int>>> dp(grid.size(), vector<vector<int>>(grid[0].size(), vector<int>(k, -1)));
    return solve(grid, 0, 0, 0, k, dp);
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m,k; cin>>n>>m>>k;
    vector<vector<int>> grid(n, vector<int>(m));
    for(int i= 0; i<n; i++){
        for(int j = 0; j<m; j++) cin>>grid[i][j];
    }
    cout<<numberOfPaths(grid,k)<<endl;
    return 0;
}