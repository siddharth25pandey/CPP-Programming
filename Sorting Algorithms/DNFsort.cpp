#include<bits/stdc++.h>
using namespace std;

void swap(int arr[],int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

void dnfSort(int arr[], int n){
    int low=0;
    int mid=0;
    int high=n-1;

    while(mid<=high){
        if(arr[mid]==0){
            swap(arr,low,mid);
            low++; mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr,mid,high);
            high--;
        }
    }
}

int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    dnfSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}