 //Time Complexity is O(ELOGV).
#include<bits/stdc++.h>
using namespace std;
class Edge
{
public:
    int source;
    int dest;
    int weight;
};
void kruskal(Edge *input,int V,int E);
bool compare(Edge e1,Edge e2);
int FindParent(int v,int *parent);
int FindParent(int v,int *parent)
{
    if(parent[v]==v)
        return v;
    return(FindParent(parent[v],parent));
}

bool compare(Edge e1,Edge e2)
{
    return e1.weight<e2.weight;
}

void kruskal(Edge *input,int V,int E)
{
    sort(input,input+E,compare);
    Edge *output=new Edge[V-1];
    int *parent=new int[V];
    for(int i=0;i<V;i++)
        parent[i]=i;
    int i=0;
    int count=0;
    while(count!=V-1)
    {
        Edge CurrentEdge=input[i];
        int s=FindParent(CurrentEdge.source,parent);
        int p=FindParent(CurrentEdge.dest,parent);
        if(s!=p)
        {
            output[count]=CurrentEdge;
            count++;
            parent[s]=p;
        }
        i++;
    }
    for(i=0;i<V-1;i++)
    {
        if(output[i].source<output[i].dest)
            cout<< output[i].source<<" "<< output[i].dest<<" "<< output[i].weight<<endl;
        else
            cout<< output[i].dest<<" "<< output[i].source<<" "<< output[i].weight<<endl;
    }
}
int main()
{
    int E,V;
    cout<<" Enter Vertices and Edges of a Graph : " <<endl;
    cin>>V>>E;
    Edge *input=new Edge[E];
    for(int i=0;i<E;i++)
    {
        int s,d,w;
        cout<<" Enter source,destination and weight of a Graph : "<<endl;
        cin>>s>>d>>w;
        input[i].source=s;
        input[i].dest=d;
        input[i].weight=w;
    }
    kruskal(input,V,E);
}
