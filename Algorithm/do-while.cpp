#include<iostream>
using namespace std;
int main()
{
    int bil = 1;

    do{
        bil++;
        if (bil % 2 == 1){
            cout<<"Bilangan ganjil :"<<bil<<endl;
        }
    }while(bil <= 99);
}
