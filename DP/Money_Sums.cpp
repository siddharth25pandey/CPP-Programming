#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;
bool sumSet[101][100001];
void init()
{
    for (int subSum = 0; subSum < 100001; subSum++)
    {
        for (int i = 0; i < 101; i++)
        {
            if (i == 0)
            {
                if (subSum == 0)
                    sumSet[i][subSum] = true;
                else
                {
                    sumSet[i][subSum] = false;
                }
            }
            if (subSum == 0)
                sumSet[i][subSum] = true;
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    for (int j  = 1; j < 100001; j++)
    {
        for (int i = 1; i <=n ; i++)
        {
            if(arr[i-1]<=j)
            sumSet[i][j]=sumSet[i-1][j-arr[i-1]]||sumSet[i-1][j];
            else
            {
                sumSet[i][j]=sumSet[i-1][j];
            }
            
        }
        
    }

    set<int> s;
     for (int i = 1; i <= sum; i++)
     {
         if(sumSet[n][i]==true)
         s.insert(i);
     }
     cout<<s.size()<<endl;
     for (auto i:s)
     {
         cout<<i<<" ";
     }
    
    cout<<endl;
    
    
}

int main()
{
    init();
    solve();

    return 0;
}