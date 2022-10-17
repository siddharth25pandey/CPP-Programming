#include<iostream>
using namespace std;
int main()
{
    // variabel
    int uas_007[10], uts_007[10], tugas_007[10];
    float hasil_007[20];
    string siswa_007, mapel_007[20], grade_007[10], nim_007;
    char ulangi_007 = 'y';



    //header program
    cout<< "--------------------------------------------------------------------"<< endl;
    cout<< "\t\t\t SELAMAT DATANG \t\t\t"<< endl;
    cout<< "\t\t PROGRAM PERHITUNGAN NILAI AKHIR SEMESTER \t\t"<< endl;
    cout<< "\t MAHASISWA TEKNIK INFORMATIKA UNIVERSITAS BOYOLALI \t"<< endl;
    cout<< "---------------------------------------------------------------------"<< endl;
    cout<< endl;

    cout<< "-- \t Indeks Nilai 5 Mata Kuliah Mahasiswa \t--"<<endl;
    cout<<endl;
    cout<<endl;
    cout<< " Masukan Nama Mahasiswa   : ";cin>>siswa_007;
    cout<< " Masukan Nim Mahasiswa    : ";cin>>nim_007;
    cout<<endl;
    cout<<"============Daftar input nilai SEMESTER 1==============\n";


        //melakukan perulangan data penilaian mahasiswa dengan max 5 data
        for(int i_007=0; i_007<3; i_007++){
            cout<<endl;
            cout<< " Masukan Mata Kuliah      : ";cin>>mapel_007[i_007];
            cout<< " Masukan Nilai Tugas&Quiz : ";cin>>tugas_007[i_007];
            cout<< " Masukan Nilai UTS        : ";cin>>uts_007[i_007];
            cout<< " Masukan Nilai UAS        : ";cin>>uas_007[i_007];
            cout<< "---------------------------\n";
            cout<<endl;

            //rumus menentukan nilai akhir
            hasil_007[i_007] = (tugas_007[i_007]*0.2) + (uts_007[i_007]*0.3) + (uas_007[i_007]*0.4);
            if(hasil_007[i_007] >= 87){
                grade_007[i_007] = 'A';
            }else if(hasil_007[i_007] >= 67 & hasil_007[i_007] < 87){
                grade_007[i_007] = 'B';
            }else if(hasil_007[i_007] >= 57 & hasil_007[i_007] < 67){
                grade_007[i_007] = 'C';
            }else if(hasil_007[i_007] >= 37 & hasil_007[i_007] < 57){
                grade_007[i_007] = 'D';
            }else if(hasil_007[i_007] >= 0 & hasil_007[i_007] < 37){
                grade_007[i_007] = 'E';
            }

        }
        while(ulangi_007 == 'y'){
            cout<<endl;
            cout<< " Tampilkan Daftar Nilai ? (y/t) : \n";
            cout<< " Jawab : ";cin>>ulangi_007;
            cout<<endl;
            cout<< " Daftar Nilai Mahasiswa ( "<<siswa_007<<" )"<<endl;
            cout<< " Nim Mahasiswa ( "<<nim_007<<" )"<<endl;
            cout << "-------------------------------------------------------------------------------" << endl;
            cout << "NO" << "\t" << " MAKUL" << "\t \t \t" << "TUGAS" << "\t"  << "UTS" << "\t" << "UAS" << "\t" << "NILAI AKHIR" << "\t" << "INDEKS" << "\t" << endl;
            cout << "-------------------------------------------------------------------------------" << endl;

            for(int i_007=0; i_007<3; i_007++){
                cout<<i_007+1<<" \t "<<mapel_007[i_007]<<" \t \t "<<tugas_007[i_007]<<" \t"<<uts_007[i_007]<<" \t "<<uas_007[i_007]<<" \t "<<hasil_007[i_007]<<" \t \t "<<grade_007[i_007]<<endl;
                cout<<"------------------------------------------------------------------------"<<endl;

            }
        }
        //end of while
        cout<<endl;
        cout<<"================================*******=========================\n";
        cout<<" \t  \t \t      perulangan selesai ! \n";
        cout<<"================================*******=========================\n";
        cout<<" \t \t \t \t \t \t SELSESAI \n\n";


    return 0;
}
