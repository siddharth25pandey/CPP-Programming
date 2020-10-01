#include<bits/stdc++.h>
using namespace std; 

/*
Radix sort is used for elements in the range of 1 to n^2 

The idea of Radix Sort is to do digit by digit sort starting from least significant digit to most significant digit.
Radix sort uses counting sort as a subroutine to sort.

*/
  
// A function to do counting sort of array according to 
// the digit represented by exp. 
vector<int> countSort(vector<int>& arr, int exp) 
{ 
    int n = arr.size();
    vector<int> output(n); // output array 
    vector<int> count(10,0);
    int i; 
  
    // Store count of occurrences in count[] 
    for (i = 0; i < n; i++) 
        count[ (arr[i]/exp)%10 ]++; 
  
    // Change count[i] so that count[i] now contains actual 
    //  position of this digit in output[] 
    for (i = 1; i < 10; i++) 
        count[i] += count[i - 1]; 
  
    // Build the output array 
    for (i = n - 1; i >= 0; i--) 
    { 
        output[count[ (arr[i]/exp)%10 ] - 1] = arr[i]; 
        count[ (arr[i]/exp)%10 ]--; 
    } 
    return output;
} 
void radixsort(vector<int>& arr, int n) 
{ 
    int m = *max_element(arr.begin(), arr.end());
  
    //Counting sort for every digit is done. 
       
    for (int exp = 1; m/exp > 0; exp *= 10) 
        arr = countSort(arr, exp); 
} 
void print(vector<int>& arr) 
{ 
    for (auto i : arr) cout<<i<<" ";
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

    cout<<"\nSorted array : \n";
    radixsort(arr, n); 
    print(arr); 
    return 0; 
}

/*
Time complexity :  O(d*(n+b)) time where b is the base for representing numbers

 If k is the maximum possible value, then d would be O(logb(k)). //log of k with base b

 Let k <= nc where c is a constant. In that case, the complexity becomes O(nLogb(n)).
 
 If b value is made larger then time complexity can be reduced to O(n). 
*/