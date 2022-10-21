#include <iostream>
#include <vector>
#include <stack>

using namespace std;

// add the edge in graph
void edge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
}
// function for dfs traversal
void dfs(int s, vector<int> adj[], bool visit[])
{
    stack<int> stk; // stack in STL
    stk.push(s);
    visit[s] = true;
    while (!stk.empty())
    {
        int u = stk.top();
        cout << u << " ";
        stk.pop();
        // loop for traverse
        for (int i = 0; i < adj[u].size(); i++)
        {
            if (!visit[adj[u][i]])
            {
                stk.push(adj[u][i]);
                visit[adj[u][i]] = true;
            }
        }
    }
}
// main function
int main()
{
    int nv;
    cout << "Enter Number of Vertices: ";
    cin >> nv;
    vector<int> adj[nv]; // vector of array to store the graph
    bool visit[nv];      // array to check visit or not of a node
    // initially all node are unvisited
    for (int i = 0; i < nv; i++)
    {
        visit[i] = false;
    }
    int ne;
    cout << "Enter Number of Edges: ";
    cin >> ne;
      int so;
    cout << "Enter Starting Node : ";
    cin>>so;

    cout<<endl<<endl;
     // input for edges
    for (int i = 0; i < ne; i++)
    {
        int a, b;
        cout << "Enter Edge Starting Node and Ending Node: ";
        cin >> a >> b;
        edge(adj, a, b);
    }
    cout << "DFS traversal is"
         << "  ";
    // call dfs function
    dfs(so, adj, visit);
    cout << endl;
}
