#include <bits/stdc++.h>
using namespace std ;
long long subArrayRanges(vector<int>& A) {
        long long res = 0;
        for (int i = 0; i < A.size(); i++) {
            int ma = A[i], mi = A[i];
            for (int j = i; j < A.size(); j++) {
                ma = max(ma, A[j]);
                mi = min(mi, A[j]);
                res += ma - mi;
            }
        }
        return res;
    }
int main() {
  int n; cin>>n;
  vector<int> test(n);
  for(int i=0;i<n;i++){
      int t;
      cin>>t;
      test[i]=t;
  }
  cout<<subArrayRanges(test);
  return 0;
}
