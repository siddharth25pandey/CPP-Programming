#include<iostream>
using namespace std;
int add(int,int,int=0);
main()
{
    int a,b;
    cout<<"Enter the values of a and b:\n";
    cin>>a>>b;
    cout<<"The sum of a and b is :"<<add(a,b)<<"\n";
    int c;
    cout<<"Enter the values of a and b and c:\n";
    cin>>a>>b>>c;
    cout<<"The sum of a and b is :"<<add(a,b,c);
}
int add(int a,int b,int c)
{
    return(a+b+c);
}

