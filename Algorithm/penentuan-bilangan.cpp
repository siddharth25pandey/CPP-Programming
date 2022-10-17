#include<iostream>
using namespace std;
int main()
{
    int choose, maks;

    cout<<" ===PROGRAM PEMILIHAN BILANGAN GANJIL/GEBAP== "<<endl;
    cout<<endl;

    cout<<" Tekan Pilihan [1.Ganjil]/[2.Genap] = ";cin>>choose;
    cout<<" Masukan Maksimal Angka = ";cin>>maks;
    cout<<endl;

    if (choose == 1){
        cout<<"Deret Bilangan Gnajil "<<endl;
        for(int i=1;i<=maks;i++)
        {
            if(i%2 !=0)
                cout<<i<<" ";
        }
    }else{
        cout<<"Deret Bilangan Genap "<<endl;
        for(int i=1;i<=maks;i++){
            if(i%2==0){
                cout<<i<<" ";
            }
        }
    }
    cout<<"\n----------------------------------------";

    return 0;
}
