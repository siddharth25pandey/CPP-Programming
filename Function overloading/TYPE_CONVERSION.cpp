/*Type conversion by using Function Overloading in c++*/
#include<iostream>
using namespace std;
void function(float);
void function(int);
void function(float x)
{
std::cout << "Value of x is : " <<x<< std::endl;
}
void function(int y)
{
std::cout << "Value of y is : " <<y<< std::endl;
}
int main()
{
function(3.4);
function(34);
return 0;
}
