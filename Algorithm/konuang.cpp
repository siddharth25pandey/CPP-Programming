#include<iostream>
using namespace std;
int main()
{
    float rp, us;

    cout<<" KONVERSI MATA UANG DARI RUPIAH(Rp) KE DOLLAR($US) "<<endl;
    cout<<" ================================================= "<<endl;
    cout<<" * berdasarkan kurs mata uang nilai 1 rupiah ke adalah 0,000070 us/hari ini"<<endl;
    cout<<" ********************************************************************************"<<endl<<endl;
    cout<<"Masukan jumlah  Rupiah = Rp.";cin>>rp;

    us = 0.000070 * rp;

    cout<<"Hasil Dollar US  : "<<us<<" $US"<<endl;;

    return 0;
}

