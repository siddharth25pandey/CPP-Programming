#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void solve()
{

    string a, b;
    cin >> a;
    cin >> b;
    int n = a.size();
    int m = b.size();
    vector<vector<int>> edit(n+1,vector<int>(m+1,1e9));
   
    edit[0][0] = 0;
  
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (i)
            {
                edit[i][j] =min(edit[i][j], 1 + edit[i - 1][j]);
            }
            if (j)
            {
                edit[i][j]=min(edit[i][j], 1 + edit[i][j - 1]);
            }
            if (i &&j)
            {
                edit[i][j] =min(edit[i][j], edit[i - 1][j - 1] + (a[i-1] != b[j-1]));
            }
        }
    }
    cout << edit[n][m] << endl;
}

int main()
{
    
    int t = 1;

    while (t)
    {
        solve();
        --t;
    }

    return 0;
}