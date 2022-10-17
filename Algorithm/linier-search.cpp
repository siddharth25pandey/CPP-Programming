#include <iostream>
using namespace std;

int LinierSearch(const int *vArray, const int vJlmData, const int vCari)
{
    bool notFound = true;
    int i = 0;

    while(i < vJlmData && notFound)
    {
        if(vCari != vArray[i])
        {
            i++;
        }else
        {
            notFound = false;
        }
        if (notFound == false){
            return i;
        }else{
            return -1;
        }
    }
}

int main()
{

    int data[] = { 57, 3, 502, 99, 1007, 2, 9, 8 };
    int jmldata = sizeof(data) / sizeof(int);
    int jmlketemu = 0;

    cout<<"Data yg dicari : ";cin>>jmlketemu;
    int i = LinierSearch(data, jmldata, jmlketemu);

    if(i == -1)
    {
        cout<<"data tidak ditemukan"<<endl;

    }else
    {
        cout<<"Data ditemukan posisi index ke- "<<i<<endl;
    }
return 0;
}
