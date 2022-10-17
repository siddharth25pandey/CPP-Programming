// JokoArdh
#include<iostream>
#include<cstdlib>
#include<stdlib.h>
using namespace std;

int home=0;

void judul()
{
    cout<<" \t\t\t\t\t PENYEWAAN PAKAIAN ADAT NASIONAL "<<endl;
    cout<<" \t\t\t\t\t\t KOMPUITER BUKTIK "<<endl;
    cout<<endl;
    cout<<" \t\t\t ========================================================== \t \t"<<endl;
    cout<<endl;
    cout<<"*******************Welcome to KOMPUTER BUKTIK**********************"<<endl;
    cout<<" \t \t Kelompok By Nur Fadhila Dan Joko Ardiyanto "<<endl;
    cout<<"******************@uby/fakultas_ilmu_komputer/2021****************"<<endl<<endl;

}

void footer()
{
    cout<<endl;
    cout<<" \t\t\t\t\t TERIMAKASIH "<<endl;
    cout<<endl<<endl;
    cout<<" \t Tekan 0 untuk kembali ";cin>>home;
    system("cls");
}


int main()
{
    string ukuran[10], kode[10], nama;
    int pilihan, lama, bayar, kembali;
    int jml[10], sewa[10], harga[10];
    int resul[10];
    int hasil=0;
    //char ulangi = 'y';

kembali:
    judul();

        cout<<endl;
        cout<<"\tPilih Menu : "<<endl<<endl;
        cout<<"\t<-1 Input Data "<<endl;
        cout<<"\t<-2 Logout"<<endl;
        cout<<"============================="<<endl;
        cout<<endl;
        cout<<" Masukan Pilihan = ";cin>>pilihan;

       switch(pilihan)
       {
    case 1:
        system("cls");
        judul();

        cout<<" Nama Penyewa        : ";cin>>nama;
        cout<<" Input Lama Sewa     : ";cin>>lama;
        cout<<" Input Jumlah Data   : ";cin>>jml[10];
        cout<<endl;

        cout<<"*******************************************"<<endl;

        for(int i=0; i<jml[10]; i++)
        {
            cout<<endl;
            cout<<" DATA KE -"<<i<<endl;
            cout<<" Input Kode Paket Baju (JB/JT/SB)        : ";cin>>kode[i];
            cout<<" Input Harga Paket (20000/25500/30000)   : ";cin>>harga[i];
            cout<<" Input Kode Ukuran Baju (S/M/L)          : ";cin>>ukuran[i];
            cout<<" Jumlah Sewa                             : ";cin>>sewa[i];


        }

        system("cls");
        judul();

        cout<<endl;
        cout<<"NAMA PENYEWA : "<<nama<<endl;
        cout<<"DATA BAJU YANG DISEWA"<<endl;
        cout<<"**********************************************************************************"<<endl;
        cout<<"NO      Nama Paket     Harga       Jumlah Sewa     Subtotal                         "<<endl;
        cout<<"**********************************************************************************"<<endl;
        for(int i=0; i<jml[10]; i++){
                resul[i] = harga[i] * sewa[i];
            cout<<i+1<<"\t"<<kode[i]<<"\t"<<harga[i]<<"\t \t"<<sewa[i]<<"\t"<<resul[i]<<endl;

            hasil=hasil+resul[i];
        }
        cout<<"**********************************************************************************"<<endl<<endl;

        cout<<" \t \t \t \t  TOTAL BAYAR      : Rp. "<<hasil<<endl;
        cout<<" \t \t \t \t  UANG BAYAR BAYAR : Rp. ";cin>>bayar;

        kembali = bayar - hasil;

        cout<<" \t \t \t \t  KEMBALIAN        : Rp. "<<kembali<<endl;

        footer();
        goto kembali;


     break;
    case 2:
        exit(1);
        break;

    default:
        system("cls");
        cout<<" Pilihan salah ...... !!"<<endl;
        break;

       }

       return 0;
}
