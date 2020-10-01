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
void selectionSort(int arr[], int n){
    int i,j,mini;;
    for(i=0;i<n-1;i++){
        mini=i;
        for(j=i+1;j<n;j++)
            if(arr[j]<arr[mini])
                mini=j;
        swap(&arr[mini], &arr[i]);
    }
}
int main(){
    int arr[]={64,34,25,12,22,11,90};
    int i,n=sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
    cout<<"Sorted array: \n";
    for(i=0;i<n;i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
