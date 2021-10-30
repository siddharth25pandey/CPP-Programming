#include <iostream>
#include <vector>
using namespace std;

#define MAXN 100005
#define MOD 1000000007

long long n;
vector<vector<long long>> adj(MAXN);
vector<long long> waysBlack(MAXN);
vector<long long> waysWhite(MAXN);

void dfs(long long node, long long parent) {
    waysBlack[node] = 1;
    waysWhite[node] = 1;

    for(auto child : adj[node]) {
        if (child != parent) {
            dfs(child, node);
            waysWhite[node] = (waysWhite[node] * (waysWhite[child] + waysBlack[child])) % MOD;
        }
    }
    for(auto child : adj[node]) {
        if (child != parent) {
            waysBlack[node] = (waysBlack[node] * waysWhite[child]) % MOD;
        }
    }
}

int main() {
    cin >> n;
    for(long long i = 0; i < n - 1; ++i) {
        long long x, y;
        cin >> x >> y;
        --x; --y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    dfs(0, -1);

    cout << (waysBlack[0] + waysWhite[0]) % MOD << endl;

    return 0;
}
