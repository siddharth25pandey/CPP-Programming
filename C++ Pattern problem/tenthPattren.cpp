#include<iostream>
using namespace std;
int main()
{
   for(int i=0;i<5;i++)
   {
      for(int j=5-i;j>=1;j--)
      {
         cout<<"*";
      }

      for( int j=1;j<=i*2;j++)
      {
         cout<<" ";
      }

      for(int j=5-i;j>=1;j--)
      {
         cout<<"*";
      }
      cout<<"\n";
   }

   for(int i=1;i<=5;i++)
   {
      for(int j=1;j<=i;j++)
      {
         cout<<"*";
      }

      for( int j=1;j<=10-i*2;j++)
      {
         cout<<" ";
      }

      for(int j=1;j<=i;j++)
      {
         cout<<"*";
      }
      cout<<"\n";
   }
   return 0;
}

/*

**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********

*/