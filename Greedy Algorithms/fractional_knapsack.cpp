#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

struct Item
{
    int value;
    int weight;
};

double fractionalKnapsack(int W, Item arr[], int n)
{
    vector<pair<double, int>> vp(n);
    double ans = 0.0;

    for (int i = 0; i < n; i++)
    {
        vp[i].first = arr[i].value / double(arr[i].weight);
        vp[i].second = i;
    }

    sort(vp.rbegin(), vp.rend());

    for (int i = 0; i < n && W > 0; i++)
    {
        if(arr[vp[i].second].weight >= W)
        {
            ans += W * vp[i].first;
            break;
        }

        else
        {
            ans += arr[vp[i].second].value;
            W -= arr[vp[i].second].weight;
        }
    }

    return ans;
}

int main()
{
    int n, w;
    cin >> n >> w;

    Item arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i].value;

    for (int i = 0; i < n; i++)
        cin >> arr[i].weight;

    cout << fractionalKnapsack(w, arr, n) << "\n";

    return 0;
}