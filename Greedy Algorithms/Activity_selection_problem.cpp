#include<bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test(t) ll t; cin>>t; while(t--)

bool compare(pair<int,int>p1,pair<int,int>p2)
{
    return p1.second<p2.second;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    test(t)
    {
        ll n,i,s,e,ans=1;
        cin>>n;

        vector<pair<int,int>>v;

        for(i=0;i<n;i++)
        {
            cin>>s>>e;
            v.pb(mp(s,e));
        }

        // Activity selection algorithm
        //sort
        sort(v.begin(),v.end(),compare);
        ll job=v[0].second;

        for(i=1;i<n;i++)
        {
            if(v[i].first>=job)
            {
                job=v[i].second;
                ans++;
            }
        }
        cout<<ans<<endl;

        v.clear();
    }
    return 0;
}