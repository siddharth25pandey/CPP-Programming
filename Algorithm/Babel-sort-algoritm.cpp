#include<iostream>
#include<stdlib.h>
using namespace std;

int data[10], data2[10];
int n;

void tukar(int a, int b)
{
    int t;
    t = data[b];
    data[b] = data[a];
    data[a] = t;
}

void bable_sort()
{
    system("cls");
    for(int i=0;i<n;i++)
    {
        cout<<" TAHAP :"<<(i)<<"\n";
        cout<<"==================================== \n";

        for(int j=0; j<n-1; j++)
        {
            if(data[j] > data[j+1])
            {
                tukar(j,j+1);

                for (int x=0; x<n; x++)
                {
                     cout << data[x] << "\t";
                     cout << "\n";
                }
            }
        }
    }
}

int main()
{
    cout<<"============PROGRAM BUBLE SHORT================= \n";

    cout<<" Jumlah data : ";cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Masukkan data ke "<<(i+1)<<" : ";cin>>data[i];
        data2[i]=data[i];
    }
    bable_sort();

}
