/* problem link : https://www.spoj.com/problems/EXPEDI/    */

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void IOS()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main(void)
{
    IOS();
    int tt = 1;
    cin >> tt;

    while (tt--)
    {
        int n, l, p, j, count = 0, flag = 0, x = 0;
        cin >> n;

        vector<pair<int, int>> vp(n+1);
        vector<int> fuel(n, 0);

        for (int i = 0; i < n; i++)
            cin >> vp[i].first >> vp[i].second;

        cin >> l >> p;

        for (int i = 0; i < n; i++)
            vp[i].first = l - vp[i].first;
        
        vp[n].first = l; vp[n].second = 0;

        sort(vp.begin(), vp.end());
        make_heap(fuel.begin(), fuel.end());

        for (int j = 0; j <= n; j++)
        {
            while (p < vp[j].first - x)
            {
                if (fuel.front() == 0)
                {
                    flag = 1;
                    break;
                }

                else
                {
                    count++;
                    p += fuel.front();
                    pop_heap(fuel.begin(), fuel.end());
                    fuel.pop_back();
                }
            }

            if (flag == 1)
            {
                cout << "-1\n";
                break;
            }

            p -= vp[j].first - x;
            fuel.push_back(vp[j].second);
            push_heap(fuel.begin(), fuel.end());
            x = vp[j].first;
        }

        if(flag == 0) cout << count << "\n";
    }

    return 0;
}