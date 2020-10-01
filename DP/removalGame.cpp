#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;
ll arr[5005];
ll maxScore[5005][5005];
ll window(ll i, ll j)
{
    if (i > j)
        return 0;

    if (maxScore[i][j] != -1)
    {
        return maxScore[i][j];
    }
    ll way1 = arr[i] + min(window(i + 1, j - 1), window(i + 2, j));
    ll way2 = arr[j] + min(window(i, j - 2), window(i + 1, j - 1));

    return maxScore[i][j] = max(way1, way2);
}
void solve()
{

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    memset(maxScore, -1, sizeof(maxScore));
    cout << window(0, n - 1) << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();

    return 0;
}