//CodeChef Problem Code: MAKEEQUAL
#include <bits/stdc++.h>
using namespace std;
#define el "\n";

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t,n,m,nn;
	cin>>t;
	while(t--){
	    cin>>n;
		nn = n;
		int *ar = new int[n];
		while(n--){
			cin>>ar[n];
		}
		m = *max_element(ar, ar + nn) - *min_element(ar, ar + nn);
		cout<<m<<el;
	}
	return 0;
}