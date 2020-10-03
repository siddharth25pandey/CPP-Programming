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
ll ans=0,n=0,q=0;
void check(char first,string a[],char b[],ll tot){
    ll i;
    if(tot==n){
        ans++;
        return;
    }
    for(i=0;i<q;i++)
        if(b[i]==first)
            check(a[i][0],a,b,tot+1);
}
int main(){
    ll i;
    cin >> n >> q;
    string a[q];
    char b[q];
    for(i=0;i<q;++i)
        cin >> a[i] >> b[i];
    check('a',a,b,1);
    cout << ans << endl;
    return 0;
}
