#include<bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test(t) ll t; cin>>t; while(t--)

ll maximum_subarray_sum(ll *a,ll n)
{
    ll dp[1000];
    dp[0]=a[0]>0?a[0]:0;

    ll max_so_far=dp[0],i;

    for(i=1;i<n;i++)
    {
        dp[i]=dp[i-1]+a[i];
        if(dp[i]<0)
        dp[i]=0;

        max_so_far=max(max_so_far,dp[i]);
    }
    return max_so_far;
}

// space optimised approach 
//kadan's algorithm

ll kadane_algorithm(ll *a,ll n)
{
    ll current_sum=0;
    ll max_sum=0,i;

    for(i=0;i<n;i++)
    {
        current_sum+=a[i];
        if(current_sum<0)
        current_sum=0;

        max_sum=max(max_sum,current_sum);
    }

    return max_sum;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    test(t)
    {
        ll a[]={-3,2,5,-1,6,3,-2,7,-5,2};

        ll n=sizeof(a)/sizeof(ll);

        cout<<kadane_algorithm(a,n);
    }
    return 0;
}