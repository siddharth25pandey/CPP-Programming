#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;


void solve()
{
    int n;
    cin>>n;
    int arr[n+1]={0};
    
    for (int i = 1; i <= n; i++)
    {
        arr[i]=i;
    }
    int sum=n*(n+1)/2;
    if(sum%2!=0)
    {
        cout<<"0"<<endl;

    }
    else
    {
        sum=sum/2;
        int equalSum[n+1][sum+1];
        memset(equalSum,0,sizeof(equalSum));
        for (int i = 0; i <=n; i++)
        {
            equalSum[i][0]=1;
        }
        
        for (int i = 1; i <=n; i++)
        {
            for (int j = 0; j <= sum; j++)
            {
                equalSum[i][j]=equalSum[i-1][j];
                if(j-i>=0)
                equalSum[i][j]=(equalSum[i][j]+equalSum[i-1][j-i])%mod;
            }
            
        }

        cout<<(1ll*500000004*equalSum[n][sum])%mod<<endl;;
        
    }
    

}

int main()
{
  
    int t=1;

    while(t)
    {
        solve();
        --t;
    }

    return 0;
}