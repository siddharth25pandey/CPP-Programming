#include "bits/stdc++.h"
using namespace std;
void toh(int n, int a, int b, int c){
    if(n > 0){
        toh(n-1,a,c,b);
        cout << a << " to " << c << endl;
        toh(n-1,b,a,c);
    }
}
int main(){
    int n,a,b,c;
    cin >> n >> a >> b >> c ;
    toh(n,a,b,c);
}