#include <bits/stdc++.h>
using namespace std;

int func(int arr[], int n)
{
    int i, j, min_idx;
    int count=0;
    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;
           if(min_idx != i){
               int temp=arr[i];
               arr[i]=arr[min_idx];
               arr[min_idx]=temp;
        count++;
           }
               
           }
           return count;
}

int main()
{
    int arr[50];
    int n=0;
    int i=0;
    cout<< "Enter number in array and press -1 to stop insertaion\n";
    for(i=0;;i++){
        scanf("%d", &n);
        if(n==-1){
            break;
        }
        arr[i]=n;
    }
    n = i;
    cout << "Minimum number of swaps required: " << func(arr, n) << '\n';
}
