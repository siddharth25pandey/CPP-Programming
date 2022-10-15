// C++ program to find minimum number of swaps required to sort an array

#include <bits/stdc++.h>
using namespace std;

// function to return of index of element which need to be placed at right position.
int indexOf(vector<int> &arr, int s, int ele)
{
   for (int i = s; i < arr.size(); i++)
   {
      if (arr[i] == ele)
      {
         return i;
      }
   }
   return -1;
}

// function to return minswaps to required to sort 
int minSwaps(vector<int> arr)
{
   int ans = 0;
   int n = arr.size();
   vector<int> temp(arr.begin(), arr.end());
   sort(temp.begin(), temp.end());

   for (int i = 0; i < n; i++)
   {

      // This is checking whether the current element is at the right place or not
      if (arr[i] != temp[i])
      {
         ans++;
         // Swap the current element with the right index so that arr[0] to arr[i] is sorted
         int k = indexOf(arr, i+1, temp[i]);
         // if we get a valid index, we will swap it.
         if (k != -1)
            swap(arr[i], arr[k]);
      }
   }
   return ans;
}

int main()
{
   vector<int> arr;
   int n;
   cin >> n;
   for (int i = 0; i < n; i++)
   {
      int num;
      cin >> num;
      arr.push_back(num);
   }
   cout << minSwaps(arr);
}

Time Complexity : O(n^2)
Space Complexity : O(n)
 
