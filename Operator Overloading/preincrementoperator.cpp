#include<iostream>
using namespace std;
class Increment
{
    int a;
public:
    void setdata(int x)
    {
        a=x;
    }
    void displaydata()
    {
        cout<<"Value of a is "<<a<<".\n";
    }
    Increment operator++()
    {
        Increment temp;
        temp.a=++a;
        return temp;
    }
};
int main()
{
    Increment c1,c2,c3;
    c1.setdata(4);
    c2=++c1;                                                                 //c1.operator++();
    c1.displaydata();
    c2.displaydata();
}
