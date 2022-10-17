#include<iostream>
using namespace std;
int main()
{
    int bil;
    for (bil=1;bil<=10; ++bil )
    {
        if (bil == 6)
            continue;

            cout<< bil <<endl;
    }

    return 0;
}
