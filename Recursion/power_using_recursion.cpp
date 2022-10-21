#include "bits/stdc++.h"
using namespace std;
//not optimized bruteforce
int power(int n, int m ){ 
    if(m == 0) return 1;
    else return n*power(n,m-1);
}
// optimized
int power1(int n, int m){
    if(m == 0) return 1;
    if(m%2==0) return power1(n*n,m/2);
    else return n*power1(n*n,(m-1)/2);
}
int main(){
    int n,m;
    cin >> n >> m ;
    cout << power(n,m) << endl;
    cout << power1(n,m) << endl;
}