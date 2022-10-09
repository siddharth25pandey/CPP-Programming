#include <iostream>
using namespace std;
int calcHiddenNumber(int arr[], int n){
   long int sum = 0;
   for(int i = 0; i < n; i++){
      sum = sum + arr[i];
   }
   int hidNum = (sum / n);
   if((hidNum * n) == sum )
      return hidNum;
   else
      return -1;
}
int main() {
   int n = 4;
   int arr[] = { 4, 11, 12, 21 };
   cout<<"The hidden number for the array is "<<calcHiddenNumber(arr, n);
   return 0;
}
