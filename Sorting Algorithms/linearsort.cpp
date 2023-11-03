#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a[50],i,n,j,temp;
cout<<"Enter number of elements: ";
cin>>n;
cout<<"Enter array elements: ";
for(i=0;i<n;i++)
  cin>>a[i];
for(i=0;i<n;i++)
{
  for(j=0;j<n;j++)
  {
    if(a[i]>a[j])
    {
      temp=a[i];
      a[i]=a[j];
      a[j]=temp;
     }
   }
}
cout<<"Sorted array is: ";
for(i=0;i<n;i++)
  cout<<a[i];
getch();
}