#include<iostream>
using namespace std;
int area(int,int);
float area(int);
main()
{
    int r;
    cout<<"Enter the radius of a circle:\n";
    cin>>r;
    cout<<"The area of circle is:"<<area(r)<<"\n";
    int l,b;
    cout<<"Enter the length and breadth of the rectangle:\n";
    cin>>l>>b;
    cout<<"The area of rectangle is "<<area(l,b)<<".";
}
int area(int l,int b)
{
    return(l*b);
}
float area(int r)
{
    return(3.14*r*r);
}
