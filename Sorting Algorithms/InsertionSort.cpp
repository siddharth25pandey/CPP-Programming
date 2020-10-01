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
using namespace std;
void insertionSort(int arr[], int n){
    int i,key,j;
    for(i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}
int main(){
    int arr[] ={2,1,3,5,6};
    int i,n=sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr,n);
    for(i=0;i<n;i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
