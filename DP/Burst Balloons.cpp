int bruh(int i,int j,vector<int>&v,vector<vector<int>>&dp){
    if(i>j)return 0;
    int mx=-1e9;
    if(dp[i][j]!=-1)return dp[i][j];
    
    for(int k=i;k<=j;k++){
        int p=v[k]*v[i-1]*v[j+1]+bruh(i,k-1,v,dp)+bruh(k+1,j,v,dp);
        mx=max(mx,p);
    }
    return dp[i][j]=mx;
}


int maxCoins(vector<int>& v)
{
     int n=v.size();
    vector<vector<int>>dp(n+2,vector<int>(n+2,0));
    v.insert(v.begin(),1);
    v.push_back(1);
    
//     return bruh(1,n,v,dp);
    
    for(int i=n;i>0;i--){
        for(int j=1;j<=n;j++){
            if(i>j)continue;
            int mx=-1e9;
    
            for(int k=i;k<=j;k++){
              int p=v[k]*v[i-1]*v[j+1]+dp[i][k-1]+dp[k+1][j];
              mx=max(mx,p);
            }
           dp[i][j]=mx;
        }
    }
    return dp[1][n];
}
