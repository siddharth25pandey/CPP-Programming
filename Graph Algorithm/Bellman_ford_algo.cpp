#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ll long long
#define fo(i,n) for(i=0;i<n;i++)
#define set(a) memset(a,0,sizeof(a))
#define MOD 1000000007
#define test(t) ll t; cin>>t; while(t--)

vector<int> bellman_ford(int v,int src,vector<vector<int>>edges)
{
	vector<int>dist(v+1,INT_MAX);
	dist[src]=0;

	// relax all the edges 

	for(int i=0;i<v-1;i++)
	{
		for(auto edge:edges)
		{
			int u=edge[0];
			int v=edge[1];
			int wt=edge[2];

			if(dist[u]!=INT_MAX and dist[u]+wt<dist[v])
			{
				dist[v]=dist[u]+wt;
			}
		}
	}

	for(auto edge:edges)
	{
		int u=edge[0];
		int v=edge[1];
		int wt=edge[2];

		if(dist[u]!=INT_MAX and dist[u]+wt<dist[v])
		{
			cout<<"Negative weight cycle found!";
			exit(0);
		}
	}
	return dist;
}

int main ()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m,i;
    cin>>n>>m;

    // edge list
    vector<vector<int>>edges;

    for(i=0;i<m;i++)
    {
    	int u,v,wt;
    	cin>>u>>v>>wt;
    	edges.push_back({u,v,wt});
    }

    // bellman ford algorithm
    vector<int>distances =bellman_ford(n,1,edges);

    for(i=1;i<=n;i++)
    {
    	cout<<"Node "<<i<<" is at distance "<<distances[i]<<endl;
    }
    return 0;
}