
#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        int m,sum;
        for (int i=n;i>0;i--){
            m=m+i;
        }
        for(int j=0;j<n-1;j++){
            sum+=array[j];
        }
        return m-sum;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.MissingNumber(array, n) << "\n";
    }
    return 0;
}

