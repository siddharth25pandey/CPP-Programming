#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

struct project
{
    int start;
    int end;
    int reward;
};
bool comp(project a, project b)
{
    return (a.end < b.end);
}
int findIndex(vector<int> &endPoints, int i)
{
    auto it = lower_bound(endPoints.begin(), endPoints.end(), i);
    if (it == endPoints.begin())
        return 0;
    else
    {
        it--;
        return  1+distance(endPoints.begin(), it);
    }
}
void solve()
{
    int n;
    cin >> n;
    vector<project> projects(n);
    for (int i = 0; i < n; i++)
    {
        cin >> projects[i].start >> projects[i].end >> projects[i].reward;
    }
    sort(projects.begin(), projects.end(), comp);
    vector<int> endPoints(n,0);
    for (int i = 0; i < n; i++)
    {
        endPoints[i] = projects[i].end;
    }
    ll maxReward[n + 1]={0};
    maxReward[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        ll first = projects[i - 1].reward;
        ll k = findIndex(endPoints, projects[i-1].start);
        
        first += maxReward[k];

        maxReward[i] = max(maxReward[i - 1], first);
    }

    cout << maxReward[n]<<endl;
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