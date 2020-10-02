#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> price(n);
    for (int &v : price)
        cin >> v;
    vector<int> page(n);
    for (int &v : page)
        cin >> v;

       
    vector<vector<int>> maxPage(n + 1, vector<int>(x + 1, 0));
  
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= x; j++)
        {
            if (j >= price[i - 1])
                maxPage[i][j] = max(maxPage[i - 1][j], page[i - 1] + maxPage[i - 1][j - price[i - 1]]);

            else
            {
                maxPage[i][j] = maxPage[i - 1][j];
            }
        }
    }
 
    cout<<maxPage[n][x]<<endl;
    
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