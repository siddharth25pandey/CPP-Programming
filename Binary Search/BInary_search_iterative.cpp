#include <bits/stdc++.h>
using namespace std;
bool binary_search(int *a,int n,int key)
{
    int s = 0;
    int e = n-1;
    int m = s+(e-s)/2;
    while(s<e)
    {
        if(a[m] == key)
        {
            return true;
        }
        else if (a[m]>key)
        {
            e = m-1;
        }
        else
        {
            s = m+1;
        }
        m = s+(e-s)/2;
    }
    return false;
}
int main()
{
    int arr[5] = {1,3,5,6,7};
    int key;
    cin>>key;
    if(binary_search(arr,5,key))
    {
        cout<<"Key found\n";
    }
    else
    {
        cout<<"Key not found\n";
    }

    return 0;
}