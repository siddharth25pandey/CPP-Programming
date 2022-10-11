#include <bits/stdc++.h>
using namespace std;
 

int fib(int n, int dp[])
{
    if (n <= 1)
        return dp[n] = 1;
 
    if (dp[n] != -1) {
        return dp[n];
    }
    dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
    return dp[n];
}
 

int countWays(int n)
{
    int dp[n + 1];
    memset(dp, -1, sizeof dp);
    fib(n, dp);
    return dp[n];
}
 

int main()
{
    int n = 4;
    cout << "Number of ways = " << countWays(n);
    return 0;
}