#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char huruf[50] = {'Y','o','g','y','a','k','a','r','t','a'};
    int len;

    len=strlen(huruf);
    for(int i = 0; i<len; i++)
    {
        for(int a=i; a<len; a++)
            cout<<huruf[a];
            cout<<endl;
    }
}
