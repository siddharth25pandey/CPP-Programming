// GFG Question: https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1
// Sort an array of 0's, 1's and 2's


/* Dutch National Flag Algorithm: 
-----------------------------------
Take three-pointers, namely - low, mid, high.
We use low and mid pointers at the start, and the high pointer will point at the end of the given array.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // code here 
        
        int low = 0, mid = 0, high = n-1;
        
        while(high >= mid){
            
            switch(a[mid]){
                
                case 0:
                    swap(a[low], a[mid]);
                    low++;
                    mid++;
                    break;
                
                case 1:
                    mid++;
                    break;
                    
                case 2:
                    swap(a[mid], a[high]);
                    high--;
                    break;
            }
        }
    }
    
};

int main() {
     int t;
     cin >> t;
    while(t--){
        int n;
        cin >>n;
        int a[n];
        for (int i=0;i<n;i++){
            cin >> a[i];
        }
        Solution ob;
        ob. sort012(a, n);
        for(int i=0; i<n; i++){
            cout << a[i] <<"";
        }
        cout << endl;
    return 0;
}
