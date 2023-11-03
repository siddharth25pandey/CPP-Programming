#include <iostream>
using namespace std;

bool Sorted (int arr[], int n)
{
    if(n==1)
    return true; 
      
    else 
    {
    bool restarray = Sorted(arr+1, n-1);
    return (arr[0]<arr[1] && restarray);
    }
}

int main()
{
    int arr[] = {1,2,4,5};
    cout<<Sorted(arr,4)<<endl;
    return 0;
}
