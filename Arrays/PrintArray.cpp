#include <iostream>

using namespace std;

int main()
{
    int n,num;
    cin>>n;
    int arr[n];
    cin>>num;
    for(int i=0;i<n;i++){cin>>arr[i];}
    for(int i=0;i<n;i++){cout<<arr[i]+num<<endl;}
    return 0;
}
