//C++ program to implement Insertion Sort
#include <iostream>
using namespace std;

//Funtion performing Insertion Sort
void InsertionSort(int *arr, int size){
    int i, j, key;
    for(i=1; i<size; i++){
        key = arr[i];
        j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j-=1;
        }
        arr[j+1] = key;
    }
}

//Funtion displaying the Sorted Array
void Display(int *arr, int size){
    cout<<"Sorted Array: ";
    int i=0;
    while(i<size){
        cout<<arr[i++]<<" ";
    }
}

int main(){
    int i, size;
    cout<<"Enter the size: "; cin>>size;
    int *arr = new int[size];
    cout<<"Enter "<<size<<" elements: ";
    for(i=0; i<size; i++){
        cin>>arr[i];
    }
    InsertionSort(arr,size);
    Display(arr,size);
    return 0;
}
