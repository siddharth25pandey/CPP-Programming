#include<bits/stdc++.h>

using namespace std;

const int N = 1000009;

int dp[N];
    
int func(int n){
    if(dp[n]!=-1)
        return dp[n];
    if(n<2)
        return n;
    if(n==2)
        return 1;
    else{
        return dp[n] = func(n-1)+func(n-2)+func(n-3); 
    }
}
    
int tribonacci(int n) {
       memset(dp, -1, sizeof(dp));
       int ans = func(n);
       return ans; 
}

int main() {
    
    int n;
    cin >> n;
    cout << tribonacci(n)<<endl;;
    return 0;
        
}

