#include<iostream>
using namespace std;
int main()
{
    //variabel
    int nil1, nil2, result, r1,r2,f1,f2;

    cout<<"======================PROGRAM KONVERSI SUHU======================\n";
    cout<<"================= Celcius || Reamur || Fahrenheit ==============="<<endl;
    cout<<endl;


    cout<<" Masukan nilai1 suhu Celsius = ";cin>>nil1;
    cout<<" Masukan nilai2 suhu Celsius = ";cin>>nil2;

    //proses konversi
    r1 = 4.0/5.0 * nil1;
    f1 = 9.0/5.0 * nil1 + 32;

    r2 = 4.0/5.0 * nil2;
    f2 = 9.0/5.0 * nil2 + 32;


    cout<<endl;
    cout<<" __________________________"<<endl;
    cout<<"|   C   |     R   |    F   |"<<endl;
    cout<<"|_______|_________|________|"<<endl;
    cout<<"|"<<nil1<<"\t|"<<r1<<"\t  |"<<f1<<"\t   |"<<endl;
    cout<<"|_______|_________|________|"<<endl;
    cout<<"|"<<nil2<<"\t|"<<r2<<"\t  |"<<f2<<"\t   |"<<endl;
    cout<<"|_______|_________|________|"<<endl;
    return false;
}
