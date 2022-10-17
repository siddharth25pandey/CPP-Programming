#include<conio.h>
#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;
int main() {
int i, j;
int data_jual[4][4];
for(i=1;i<=3;i++)
{
for(j=1;j<=3;j++)
{
cout<<"Data Ke - "<<i<<" "<<j<<endl;
cout<<"Jumlah Penjulan : ";
cin>>data_jual[i][j];
}
}
cout<<"Data Penjualan Pertahun"<<endl;
cout<<"-----------------------"<<endl;
cout<<"NO 2008 2009 2010"<<endl;
cout<<"-----------------------"<<endl;
for(i=1;i<=3;i++)
{
cout<<setiosflags(ios::left)<<setw(5)<<i;
for(j=1;j<=3;j++)
{
cout<<setiosflags(ios::right)<<setw(4);
cout<<data_jual[i][j];
cout<<" ";
}
cout<<endl;
}
cout<<"-----------------------"<<endl;
getch();
}
