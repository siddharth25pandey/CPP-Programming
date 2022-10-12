#include "bits/stdc++.h"
using namespace std;
int F[100];
int fib(int n){
    if(n == 0) return 0;
    else if (n == 1) return 1;
    else{
        return fib(n-2) + fib(n-1);
    } 
}
// memoization
int mfib(int n){
    if(n<=1){
        F[n]=n;
        return n;
    }
    else{
        if(F[n-2]==-1)
            F[n-2]=mfib(n-2);
        if(F[n-1]==-1)
            F[n-1]=mfib(n-1);
        return F[n-2] + F[n-1];
    }
}
int main(){
    int n;
    cin >> n;
    cout << fib(n) << endl;
    for(int i=0; i<n; i++){
        F[i] = -1;
    }
    mfib(n);
    for(int i=0; i<n; i++){
        cout << F[i] << " " ;
    }
}