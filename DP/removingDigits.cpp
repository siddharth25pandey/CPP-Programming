#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    int minDigit[1000001];
    for (int i = 0; i <=1000000; i++)
    {
        minDigit[i]=1e9;
    }
    
    for (int i = 1; i < 10; i++)
    {
        minDigit[i] = 1;
    }
    int isPresent[10] = {0};
    for (int i = 10; i <= 1000000; i++)
    {
        for (int k = 0; k < 10; k++)
        {
            isPresent[k] = 0;
        }

        int temp = i;
        while (temp > 0)
        {

            isPresent[temp % 10] = 1;
            temp /= 10;
        }
        for (int j = 1; j <= 9; j++)
        {
            if (isPresent[j] == 1)
            {
                minDigit[i] = min(minDigit[i], 1+minDigit[i - j]);
            }
        }
    }
    cout<<minDigit[n]<<endl;
}

int main()
{

        solve();
   
    return 0;
}