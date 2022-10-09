#include<bits/stdc++.h>

using namespace std;

const int N = 1000009;

int dp[N];
    
int func(int n){
    //checking if the ith element is not -1
    if(dp[n]!=-1)
        return dp[n];
    //returning 0 for n=0 , 1 for n=1 and n=2.    
    if(n<2)
        return n;
    if(n==2)
        return 1;
    else{
        return dp[n] = func(n-1)+func(n-2)+func(n-3); 
    }
}
    
int tribonacci(int n) {
       //assigning -1 to all the elements of dp array 
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

