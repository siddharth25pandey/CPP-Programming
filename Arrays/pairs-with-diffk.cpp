#include<bits/stdc++.h>
using namespace std;
int getPairsWithDifferenceK(int *arr, int n, int k) {
	unordered_map<int,int>m;
    
    int ans=0;
    
    for(int i=0;i<n;i++)
    {
        int a=k+arr[i];
        int b=arr[i]-k;
        if(a==b)
        {
            ans+=m[a];
        }
        else{
              ans+=m[a]+m[b];
        }

        m[arr[i]]+=1;
        
    }
    
   
    return ans;
}
int main() {
    int n;
    cin >> n;

    int *input = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> input[i];
    }

    int k;
    cin >> k;

    cout << getPairsWithDifferenceK(input, n, k);

    delete[] input;
}