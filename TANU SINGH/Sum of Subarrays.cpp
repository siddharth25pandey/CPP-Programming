#include <iostream>
using namespace std;

int main()
{
   int n;
   int sum = 0;                                           //stores the sum of the subarray
   cout<<"enter the size of the array\n";
   cin>>n;                                               //inputing the size of the array from the array
   int A[n];
   cout<<"Enter the elments of the array\n";
   
   for(int i=0; i<n; i++)                                //loop for inputing the elements in the array
   {
      cin>>A[i]; 
   }
   
   for(int i=0; i<n; i++)                                 //loop to point to the starting 
   { 
       sum = 0;
       for(int j=i; j<n; j++)                             //loop to point to the end point of the subarray
       {
        sum+= A[j];                                       //calculating the sum of the respective subarray     
        cout<<"the sum of the subarray is "<<sum<<endl;   //printing the summ of the subarray
       }
   }
    return 0;
}
