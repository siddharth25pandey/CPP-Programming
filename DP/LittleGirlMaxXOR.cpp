#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
#include <deque>
#include <stack>
#include <set>
#include <utility>
#include <iterator>
#include <sstream>
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
