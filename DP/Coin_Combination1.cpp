#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> coin(n);
    for (int i = 0; i < n; i++)
    {
        cin >> coin[i];
    }
    int best = 0;
    vector<int> target(m + 1, 0);
    target[0] = 1;
    int visited[m + 1] = {0};
    for (int i = 1; i <= m; i++)
    {

        for (auto choice : coin)
        {
            if (i - choice >= 0)

            {

                target[i] = target[i] + target[i - choice];
                target[i] %= mod;
            }
        }
    }
    cout << target[m] << endl;
}

int main()
{

    solve();

    return 0;
}