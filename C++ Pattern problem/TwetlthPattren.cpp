#include<iostream>
using namespace std;
int main()
{
   int size=6;
   for(int i=1;i<=size;i++)
   {

      if(i==size)
      {
         for(int j=0;j<size;j++)
         {
            cout<<"*";
         }
      }
      else{
         for(int j=0;j<i;j++)
         {
            if(j==0 || j==i-1)
            {
               cout<<"*";
            }
            else{
               cout<<" ";
            }
         }
      }
      cout<<"\n";
   }
   
   return 0;
}

/*

*
**
* *
*  *
*   *
******
*/