#include<iostream>
using namespace std;
class Acc
{
private:
    int x,y;
public:
    void inputdata(int a,int b)
    {
        x=a;
        y=b;
    }
    friend ostream& operator<<(ostream&, Acc);
    friend istream& operator>>(istream&, Acc&);
};
ostream& operator<<(ostream &dout,Acc c)
{
    dout<<"\n x="<<c.x<<"\ny="<<c.y;
    return dout;
}
istream& operator>>(istream &din,Acc &c)
{
    din>>c.x>>c.y;
    return din;
}
int main()
{
    Acc c1;
    cout<<"Enter the number";
    cin>>c1;
    cout<<"Enter the value:";
    cout<<c1;
}
