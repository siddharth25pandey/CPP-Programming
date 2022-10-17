#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
char nama[30];
    char alamat[30];

int main()
{
    strcpy(nama, "Joko Ardiyantio"); //strcpy() kudu gowo header string.h yo
    strcpy(alamat, "jl.ampel-simo");
    int nilai1 = 85;
    int nilai2 = 90;

    cout<<" Data Mahasiswa "<<endl;
    cout<<" ================================== "<<endl;
    cout<<" 1. Nama     : "<<nama<<endl;
    cout<<" 2. Alamat   : "<<alamat<<endl;
    cout<<" 3. Nilai1   : "<<nilai1<<endl;
    cout<<" 4. Nilai2   : "<<nilai2<<endl;
    float rata = (nilai1+nilai2)/2;
    cout<<" 5. Rata-rata : "<<rata<<endl;
    cout<<" ================================== "<<endl;

    return 0;
}
