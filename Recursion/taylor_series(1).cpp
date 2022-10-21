#include "bits/stdc++.h"
using namespace std;
// not optimised
double tailor(int x,int n){
    static double p = 1,f = 1;
    double ans;
    if(n == 0){
        return 1;
    }
    else{
        ans = tailor(x,n-1);
        p = p*x;
        f = f*n;
        return ans + p/f ;
    }
}
// optimised using Horner's rule
double tailor1(int x,int n){
    static double s;
    if(n == 0){
        return s ;
    }
    s = 1 + x * s / n;
    return tailor1(x,n-1);
}
int main(){
    double n,x;
    cin >> x >> n;
    cout << tailor(x,n) << endl;
    cout << tailor1(x,n) << endl;
}