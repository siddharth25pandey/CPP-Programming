/* This Algo will help us to find the Element that occurs the most in the given array in  O(N) time and O(1) space

-> We will declare the count which will count the frequency of the elemnt and value will be our element
*/


#include <iostream>
using namespace std;
int findthemax(int arry[],int n)
{
   int count=0,value;
   for(int i=0;i<n;i++)
   {
      if(count==0)
      {
         value=arry[i];
         count+=1;
      }
      else{
         if(value==arry[i]) count++;
         else count--;
      }
   }

   return value;
}

int main()
{
  // majority element is 1
   int arr[] = { 1, 1, 1, 1, 2, 3, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int majority = findthemax(arr, n);
    cout << " The majority element is : " << majority;
    return 0;
}
