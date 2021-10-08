#include <bits/stdc++.h>

using namespace std ;

int main () {
    int n = 7, i ,res=1 ;
    for(i=2;i<=n;i++) {
        res = res^i ;
    }
    cout<<res<<endl;
}
