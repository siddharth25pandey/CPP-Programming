#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int flag=1;
        for (int i =   0; i < n-1 ; i++)
        {
            if (arr[i]<arr[i+1])
            {
                flag=1;
            }
            else{
                flag = 0;
                break;
            }
        
        }
        if (flag==0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
        
    }
    return 0;
}