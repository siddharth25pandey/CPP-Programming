#include<iostream>
using namespace std;
int main()
{
   for(int i=1;i<=5;i++)
   {
      for(int j=1;j<=5-i;j++)
      {
         cout<<" ";
      }

      for(int j=1;j<=(2*i-1);j++)
      {
         cout<<"*";
      }

      
      cout<<"\n";

   }
   return 0;
}

// Reverse of this can be done easily do it yourself.
/*

    *
   ***
  *****
 *******
*********

*/