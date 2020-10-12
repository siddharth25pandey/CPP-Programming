#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll l,r,i=1,max=0,p=0;
    cin >> l >> r;
    r=l^r;
    while(r!=0){
        r>>=1;
        p++;
    }
    while(p--){
        max+=i;
        i<<=1;
    }
    cout << max << endl;
    return 0;
}
