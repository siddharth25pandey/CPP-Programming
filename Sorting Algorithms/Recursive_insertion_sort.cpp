/* IDEA : 
    Base Case: If array size is 1 or smaller, return.
    Recursively sort first n-1 elements.
    Insert last element at its correct position in sorted array.
*/
/* TIME COMPLEXITY : O(n^2) */

#include <bits/stdc++.h> 
using namespace std; 

void insertion_sort_r(vector<int>& a, int n) 
{ 
    // Base case 
    if (n <= 1) 
        return; 
  
    // Sort first n-1 elements 
    insertion_sort_r( a, n-1 ); 
  
    // Insert last element at its correct position 
    // in sorted array. 
    int last = a[n-1]; 
    int j = n-2; 
  
    /* Move elements of arr[0..i-1], that are 
      greater than key, to one position ahead 
      of their current position */
    while (j >= 0 && a[j] > last) 
    { 
        a[j+1] = a[j]; 
        j--; 
    } 
    a[j+1] = last; 
} 
void print(vector<int> a){
    for(auto i : a) cout<<i<<" ";
    cout<<"\n";
}
int main() 
{ 
    int n; 
    cin>>n; //size of array
    vector<int> arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Given array : \n";
    print(arr);
    
    insertion_sort_r(arr, n); 
    cout<<"Sorted array in ascending order : \n";
    print(arr);
} 