#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void init()
{

}

void solve()
{
    int n,m;
    cin>>n>>m;
    int arr[n+1];
    for (int i = 1; i <=n; i++)
    {
        cin>>arr[i];
    }
    int dp[n+2][m+2];
    memset(dp,0,sizeof(dp));
    for (int i = 1; i <=n; i++)
    {
        for (int j=1; j<=m; j++)
        {
            if(i==1)
            {
                if(arr[i]==0||arr[i]==j)
                {
                    dp[i][j]=1;

                }
                else
                {
                    dp[i][j]=0;
                }
                
            }
            else
            {
                if(arr[i]==0||arr[i]==j)
                {
                    dp[i][j]=((dp[i-1][j]+dp[i-1][j-1])%mod+dp[i-1][j+1])%mod;
                }
                else
                {
                    dp[i][j]=0;
                }
                
            }
            
        }
        
    }
    int ans=0;
    for (int i = 1; i <=m; i++)
    {
        ans= (ans+dp[n][i])%mod;
    }
    cout<<ans<<endl;

}

int main()
{
    init();
    int t=1;
   
    while(t)
    {
        solve();
        --t;
    }

    return 0;
}