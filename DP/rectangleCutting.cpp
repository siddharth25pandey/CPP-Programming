#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void solve()
{
    int n, m;
    cin >> n >> m;
  
    vector<vector<int>> minCut(n + 1, vector<int>(m + 1, 0));
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (i == j)
                minCut[i][j] = 0;
            else
            {
                minCut[i][j] = 1e9;

                for (int k = 1; k < i; k++)
                {
                    minCut[i][j] = min(minCut[i][j], minCut[i - k][j] + minCut[k][j] + 1);
                }

                for (int k = 1; k < j; k++)
                {
                    minCut[i][j] = min(minCut[i][j], minCut[i][k] + minCut[i][j - k] + 1);
                }
            }
        }
    }

    cout << minCut[n][m] << endl;
}

int main()
{

    solve();

    return 0;
}