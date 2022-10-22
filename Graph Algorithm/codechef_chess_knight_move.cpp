#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

const int mod = 1000000007;
int dx[] = {-2, -2, 2, 2, -1, 1, -1, 1};
int dy[] = {-1, 1, -1, 1, -2, -2, 2, 2};
int dist[9][9];
int visited[9][9];

bool isvalid(int x, int y)
{
    if (x < 1 || x > 8 || y < 1 || y > 8)
    {
        return false;
    }
    if (visited[x][y] == 1)
    {
        return false;
    }
    return true;
}
void bfs(int srcx, int srcy)
{
    queue<pair<int, int>> q;
    q.push({srcx, srcy});
    visited[srcx][srcy] = 1;
    dist[srcx][srcy] = 0;
    while (!q.empty())
    {
        int currx = q.front().first;
        int curry = q.front().second;
        q.pop();
        for (int i = 0; i < 8; i++)
        {
            if (isvalid(currx + dx[i], curry + dy[i]))
            {
                int newx = currx + dx[i];
                int newy = curry + dy[i];
                dist[newx][newy] = 1 + dist[currx][curry];
                visited[newx][newy] = 1;
                q.push({newx, newy});
            }
        }
    }
}
void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    int x1 = s1[1] - '0', y1 = (s1[0] - 'a') + 1;
    int x2 = s2[1] - '0', y2 = (s2[0] - 'a') + 1;
    bfs(x1, y1);
    cout << dist[x2][y2] << endl;
    for (int i = 1; i <= 8; i++)
    {
        for (int j = 1; j <= 8; j++)
        {
            visited[i][j] = 0;
            dist[i][j] = 0;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}