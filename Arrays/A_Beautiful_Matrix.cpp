#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5][5];
    int ans;
    int i, j, x, y;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                x = i+1;
                y = j+1;
            }
        }
    }
    i = 3 - x;
    j = 3 - y;
    if (i < 0)
    {
        i = -1 * i;
    }
     if (j < 0)
    {
        j = -1 * j;
    }
    ans = i + j;

    cout << ans;
    return 0;
}