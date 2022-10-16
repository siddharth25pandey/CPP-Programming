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

   for(int i=5;i>=1;i--)
   {
      for(int j=5-i;j>0;j--)
      {
         cout<<" ";
      }

      for(int j=(2*i-1);j>=1;j--)
      {
         cout<<"*";
      }

      
      cout<<"\n";

   }

   return 0;
}

/*

     *
    ***
   *****
  *******
 *********
 *********
  *******
   *****
    ***
     *
*/