#include<iostream>
using namespace std;
class Complex
{
private:
    int a;
public:
    void setdata(int x)
    {
       a=x;
    }
    void displaydata()
    {
        cout<<"Value of a is "<<a<<".";
    }
    Complex operator-()
    {
        Complex temp;
        temp.a=-a;
        return temp;
    }
};
int main()
{
    Complex c1,c2;
    cout<<"Enter the value of x:\n";
    int x;
    cin>>x;
    c1.setdata(x);
    c2=c1.operator-();
    c2.displaydata();
}
