#include<iostream>
using namespace std;
int main()
{

    int a;

    cout<<"====================NILAI AKHIR=============="<<endl;
    cout<<"Masukan nilai akhir = ";cin>>a;

    if(a <= 100 && a >= 85){
        cout<<" Indeks Prestasi :\n";
        cout<<" A";
    }else if(a <= 85 && a >= 70){
        cout<<" Indeks Prestasi :\n";
        cout<<" B";
    }else if(a <= 70 && a >= 60 ){
        cout<<" Indeks Prestasi :\n";
        cout<<" C";
    }else if(a <= 60 && a >= 45){
        cout<<" Indeks Prestasi :\n";
        cout<<" D";
    }else{
        cout<<" Indeks Prestasi :\n";
        cout<<" E";
    }

    return 0;
}
