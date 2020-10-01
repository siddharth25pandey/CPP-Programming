#include <iostream>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <utility>
using namespace std;
typedef long long ll;
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
void bubbleSort(int arr[],int n){
    int i,j;
    for(i=0;i<n-1;i++)
        for(j=0;j<n-i-1;j++)
            if(arr[j]>arr[j+1])
                swap(&arr[j],&arr[j+1]);
}
int main(){
    int arr[]={64,34,25,12,22,11,90};
    int i,n=sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n);
    cout<<"Sorted array: \n";
    for(i=0;i<n;i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
