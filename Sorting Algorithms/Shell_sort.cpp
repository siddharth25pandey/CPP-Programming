#include<bits/stdc++.h>
using namespace std; 
  
void shellSort(vector<int>& arr) 
{ 
    int n = arr.size();
    for (int gap = n/2; gap > 0; gap /= 2) 
    { 
        for (int i = gap; i < n; i += 1) 
        { 
            int temp = arr[i]; 
            int j;             
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) 
                arr[j] = arr[j - gap]; 
            arr[j] = temp; 
        } 
    } 
} 
  
void print(vector<int>& arr){
    for(auto i : arr) cout<<i<<" ";
    cout<<"\n";
}
int main(){ 
    int n ;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0;i<n;i++) cin>>arr[i];
    cout<<"Given array : \n";
    print(arr);

    shellSort(arr); 
  
    cout << "\nSorted array is \n"; 
    print(arr);
    return 0; 
} 