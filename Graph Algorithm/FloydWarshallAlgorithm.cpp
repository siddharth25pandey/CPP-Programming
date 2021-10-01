//Floyd Warshall algorithm used to find the shortest distance between every pair of vertex in a graph.
//Time-complexity:O(V*V*V)
#include<bits/stdc++.h>
#define v 4
#define INF 99999
using namespace std;
void floyd(int p[][v])
{
    int i,j,k;
    for(int k=0;k<v;k++)
    {
        for(int i=0;i<v;i++)
        {
            for(int j=0;j<v;j++ )
            {
                    if(p[i][k]!=INF && p[k][j]!=INF)//avoids aritmetic-overflow
                    {
                    if(p[i][k]+p[k][j]<p[i][j])
                    {
                        p[i][j]=p[i][k]+p[k][j];
                    }
                    }

            }
        }
    }
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            if(p[i][j]==INF)
                cout<<"INF"<<"   ";
            else
            cout<<p[i][j]<<"   ";
        }
        cout<<endl;
    }
}
int main()
{
    int p[v][v]={{0,5,INF,10},
                 {INF,0,3,INF},
                 {INF,INF,0,1},
                 {INF,INF,INF,0},
                };

    floyd(p);
    return 0;

}
