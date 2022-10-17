#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

struct karyawan
{
    /* data */
    int nik;
    char nama[20];
    int anak;
    int pendidikan;
};

int a;
int gapok, tanak;
char ket[10];
karyawan karyawan[5];

void fgapok ()
{
    if (karyawan[a].pendidikan == 1)
    {
        gapok = 10000;
        strcpy( ket, "SD");
    }else if (karyawan[a].pendidikan == 2)
    {
        gapok = 20000;
        strcpy(ket, "SMP");
    }else
    {
        gapok = 30000;
        strcpy(ket, "SMA/SMK");
    }
}

int fanak(int jmlanak)
{
    if (jmlanak > 2)
    {
        tanak = 3 * 500;
    }else
    {
        tanak = jmlanak * 500;
    }
}

int ftotal(int gapok, int tanak)
{
    int jumlhtotal;
    jumlhtotal = gapok + tanak;
    return jumlhtotal;
}

void cetakdata()
{
    int a, total = 0;

    //cetak isi array
    system("cls");
    cout << "Laporan Pembayaran Air"<< endl;
    cout << "==============================================" << endl;
    cout << "No NIK Nama Anak Pendidikan GApok TAnak Total" << endl;
    cout << "==============================================" << endl;
    a=0;

    while(a<2)
    {
        fgapok();
        tanak = fanak(karyawan[a].anak);
        total = ftotal(gapok, tanak);
        cout<< (a+1)
                << karyawan[a].nik<<" /t"
                <<karyawan[a].anak<<"/t"
                <<ket<<"/t"
                <<gapok<<"/t"
                <<total<<endl;

        a++;
    }
    cout<<"================================================================"<<endl;
}

int main()
{
    int totgaji;

    while(a<2)
    {
        cout<<" NIK            : ";cin>>karyawan[a].nik;
        cout<<" NAMA           : ";cin>>karyawan[a].nama;
        cout<<" Anak           : ";cin>>karyawan[a].anak;
        cout<<" Pendidikan     : ";cin>>karyawan[a].pendidikan;

        //hitung gapok......................
        fgapok();
        tanak = fanak(karyawan[a].anak);
        totgaji = ftotal( gapok, tanak);
        cout << "GajiPokok: " << gapok << endl;
        cout << "Tunj.Anak: " << tanak << endl;
        cout << "TotalGaji: " << totgaji << endl;
        a++;
    }

    //cetak data
    cetakdata();
}

