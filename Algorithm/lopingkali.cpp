//perulangan (for) program perkalian
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int ulang;
int hasil,masuk;

cout<<"program perkalian"<<endl;
cout<<"======================"<<endl;

cout<<"Masukan Banyak Perkalian = ";cin>>masuk;
cout<<endl;
for(ulang=0;ulang<=masuk;ulang++)

{
hasil=ulang*8;
cout<<ulang<<" * 8 = "<<hasil<<endl;
}
getch();
}
