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
    Increment operator++(int)                         //Here, int is written to just differentiate between post and pre increment operators
    {                                                 //Another way is:- Increment operator++();       (Line 15)
        Increment temp;                               //                 c2=++c1;                      (Line 26)
        temp.a=a++;
        return temp;
    }
};
int main()
{
    Increment c1,c2;
    c1.setdata(4);
    c2=c1++;                            //c2=c1.operator++();
    c1.displaydata();
    c2.displaydata();
}

