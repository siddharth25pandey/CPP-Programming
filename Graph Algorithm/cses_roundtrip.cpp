#include <bits/stdc++.h>
using namespace std;
 
#define int long long 
#define pb push_back
#define S second
#define F first
#define f(i,n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define vi vector<int>
#define pii pair<int,int>
 
const int N = 1e5+10;
vi g[N];
vector<bool> vis(N,0);
vector<int> par(N,-1);
 
void dfs(int node,int p)
{
      par[node] = p;
      vis[node] = 1;
    
      for(auto x : g[node])
          if(!vis[x]) dfs(x,node);
          else if(x != p)
      {
          vector<int> cyc;   
          
          int cur = node;
         
          cyc.pb(node);
          
          while(par[cur] != x)
          {
             cur = par[cur];
             cyc.pb(cur);
          }
          
          cyc.pb(x);
          cyc.pb(node);
          
          cout << cyc.size() << '\n';
          
          for(auto x : cyc) cout << x <<" ";
          exit(0);
      }
}
 
void solve()
{
  int n,m;
    cin >> n >> m;
    
  int a,b;
    
  f(i,m)
  {
    cin >> a >> b;
    g[a].pb(b);
    g[b].pb(a);
  }
    
    
  for(int i=1;i<=n;i++)
      if(!vis[i])
  dfs(i,-1);
    
  cout<<"IMPOSSIBLE\n";
    
}
 
signed main()
{
    fast;
    
    int t = 1;
    
//    cin >> t;
    
    while(t--)
        
    solve();
}