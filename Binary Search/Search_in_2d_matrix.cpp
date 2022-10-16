#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int> > &matrix, int target) {
    int n = matrix.size();
    int m = matrix[0].size();
    int l = 0, r = m * n - 1;
    while (l != r){
        int mid = (l + r - 1) >> 1;
        if (matrix[mid / m][mid % m] < target)
            l = mid + 1;
        else 
            r = mid;
    }
    return matrix[r / m][r % m] == target;
}


int main()
{
	int t;
	cin>>t;
	while(t--){
	    int n, m, target;
	    cin>>n>>m>>target;
        vector<vector<int>> v(n, vector<int>(m));
	    for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>v[i][j];
            }
	    }
	    cout<<searchMatrix(v, target)<<endl;
	}
	return 0;
}

