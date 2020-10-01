#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;
int dp[1000001];
void init()
{

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    dp[4] = 8;
    dp[5] = 16;
    dp[6] = 32;
    int temp=0;
    int temp1=0;
    int temp2=0;
    int temp3=0;
    for(int i=7;i<1000001;i++)
    {
        temp1=(dp[i-1]+dp[i-2])%mod;
        temp2=(dp[i-3]+dp[i-4])%mod;
        temp3=(dp[i-5]+dp[i-6])%mod;
        dp[i]=((temp1+temp2)%mod+temp3)%mod;
    }
}

void solve()
{
    int n;
    cin>>n;
    cout<<dp[n]<<endl;
}

int main()
{
    init();

    solve();

    return 0;
}