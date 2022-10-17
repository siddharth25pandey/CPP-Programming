#include<iostream>
using namespace std;
int main()
{
    int a[10], angka;
    //int j=1;

    cout<<"masukan bilangan desimal = ";cin>>angka;

    for(int i=0; angka>0; i++){
        a[i] = angka%2;
        angka = angka/2;
    }
    cout<<"angka binernya adalah = ";
    for(int i=i-1; i>0; i--){
        cout<<a[i];
    }
    cout<<endl;

    return 0;
}
