#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;

int parent[N],sz[N];

void make(int v)
{
    parent[v]=v;
    sz[v]=1;
}
int find(int v)
{
    if(parent[v]==v)return v;
    return find(parent[v]);
}
void Union(int a,int b)
{
    a=find(a);
    b=find(b);
    if(a!=b)
    {
        if(sz[a]<sz[b])swap(a,b);
        parent[b]=a;
        sz[a]+=sz[b];
    }
}

int main()
{
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int n;cin>>n;   // N is number of nodes
    vector<pair<int,int>> points(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>points[i].first>>points[i].second; // Taking input as coordinates
    }
    //vector<int> c(n+1),k(n+1);
    // for(int i=1;i<=n;i++)cin>>c[i];   // Taking weight as input
    // for(int i=1;i<=n;i++)cin>>k[i];

    // Minimum Spanning Tree Working Starts
    // Try To Convert the INPUTS according to the below mentioned vector
    vector<pair<long long,pair<int,int>>> edges;   // wt--src--dest
        for(int i=1;i<=n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                int dist=((points[i].first-points[j].first)*(points[i].first-points[j].first))+((points[i].second-points[j].second)*(points[i].second-points[j].second));
                edges.push_back({dist,{i,j}});
            }
        }
        sort(edges.begin(),edges.end());  // sorting them wrt distance
        for(int i=1;i<=n;i++)make(i); // Creating all independent nodes
        long long total_cost=0;   // Final cost
        // vector<int> power_stations;
        // vector<pair<int,int>> connections;
        for(auto &edge:edges)
        {
            int wt=edge.first;
            int u=edge.second.first;
            int v=edge.second.second;
            if(find(u)==find(v))continue;  // If their parents are same, thus they are under same Tree
            Union(u,v); // Adding node to MST
            // Do everything like other calculation after the nodes are added in 
            // minimum spanning tree
            // if(u==0 || v==0)power_stations.push_back(max(u,v));
            // else connections.push_back({u,v});
            total_cost+=wt;
        }
        // cout<<total_cost<<endl;
        // cout<<power_stations.size()<<endl;
        // for(int station:power_stations)cout<<station<<" ";
        // cout<<endl;
        // cout<<connections.size()<<endl;
        // for(auto &connection:connections)cout<<connection.first<<" "<<connection.second<<endl;
        cout<<total_cost;
    return 0;
}