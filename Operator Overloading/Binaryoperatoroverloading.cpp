#include<iostream>
using namespace std;
class Complex
{
private:
    int a;int b;
public:
    void inputdata(int x, int y)
    {
        a=x;
        b=y;
    }
    void displaydata()
    {
        cout<<"Value of a is "<<a<<"."<<"\nValue of b is "<<b<<".";
    }
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
        return temp;
    }
};
int main()
{
    Complex c1,c2,c3;
    c1.inputdata(3,4);
    c2.inputdata(7,6);
    c3=c1+c2;
    c3.displaydata();
}
