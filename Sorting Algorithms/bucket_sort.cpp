#include<bits/stdc++.h>
using namespace std; 

/* Time complexity : O(n) */
void bucketSort(vector<float>& arr, int n) 
{ 
    vector<float> b[n]; 

    for (int i = 0; i < n; i++) { 
        int bi = n * arr[i];
        b[bi].push_back(arr[i]); 
    } 
  
    for (int i = 0; i < n; i++) 
        sort(b[i].begin(), b[i].end()); 

    int id = 0; 
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < b[i].size(); j++) 
            arr[id++] = b[i][j]; 
} 
  
void print(vector<float>& arr){
    for(auto i : arr) cout<<i<<" ";
    cout<<"\n";
}
int main(){ 
    int n ;
    cin>>n;
    vector<float> arr(n);
    for(int i = 0;i<n;i++) cin>>arr[i];
    cout<<"Given array : \n";
    print(arr);

    bucketSort(arr, n); 
  
    cout << "\nSorted array is \n"; 
    print(arr);
    return 0; 
} 