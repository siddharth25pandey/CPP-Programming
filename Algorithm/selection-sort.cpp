#include <iostream>
using namespace std;

int main()
{
    int Nilai[] = { 5, 2, 4, 3, 1 };
    int jdata = 5;
    int i, j, x;

    for(i = 0; i<jdata-1; i++)
    {
        cout << "\nTahap : " << (i+1) << "\n";
        cout << "=================================\n";
        for(j = i+1;j<jdata;j++)
        {
            if(Nilai[i] > Nilai[j]){
                x = Nilai[i];Nilai[i] = Nilai[j];Nilai[j] = x;
            }
            for (int a = 0; a<jdata; a++){
                cout << Nilai[a] << "\t";cout << "\n";
            }
        }
    }
}
