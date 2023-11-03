#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;
int main()
{
   char str[200], ch;
   int len, i, asc_val;
   cout<<"Enter the String: ";
   gets(str);
   len = strlen(str);
   for(i=0; i<len; i++)
   {
      ch = str[i];
      if(i==0)
      {
         asc_val = ch;
         if(asc_val>=97 && asc_val<=122)
         {
            asc_val = asc_val-32;
            ch = asc_val;
            str[i] = ch;
         }
      }
      if(ch==' ')
      {
         ch = str[i+1];
         asc_val = ch;
         if(asc_val>=97 && asc_val<=122)
         {
            asc_val = asc_val-32;
            ch = asc_val;
            str[i+1] = ch;
         }
      }
   }
   cout<<"\nAll words are capitalized successfully!";
   cout<<"\nThe new string is:\n\n";
   cout<<str;
   cout<<endl;
   return 0;
}
