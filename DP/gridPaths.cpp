#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void init()
{
}

void solve()
{
    int n;
    cin >> n;
    char path[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> path[i][j];
        }
    }
    ll way1 = 0;
    ll way2 = 0;
    ll totalPaths[n + 1][n + 1] = {0};
    totalPaths[1][1] = path[1][1] == '.' ? 1 : 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (path[i][j] == '.')

            {
                way1 = j == 1 ? 0 : totalPaths[i][j - 1];
                way2 = i == 1 ? 0 : totalPaths[i - 1][j];
                totalPaths[i][j] += (way1 + way2) % mod;
            }
            else
            {
                totalPaths[i][j] = 0;
            }
        }
    }

    cout << totalPaths[n][n] << endl;
}

int main()
{
    init();
    int t = 1;

    while (t)
    {
        solve();
        --t;
    }

    return 0;
}