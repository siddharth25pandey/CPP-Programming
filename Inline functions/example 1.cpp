#include<iostream>
using namespace std;
inline void fun();
main()
{
    cout<<"You are in main.\n";
    fun();
}
void fun()
{
    cout<<"I am in fun.";
}
