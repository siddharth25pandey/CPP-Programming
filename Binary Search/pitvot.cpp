#include<iostream>
using namespace std;

int pivot(int arr[], int size){
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start)/2;

    while (start < end){
        if (arr[mid] >= arr[0]){
            start = mid + 1;
        }
        else {
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return start;
}

int main(){


    int arr[5] = {3,8,10,17,1};

    cout << "The Pivot is " << pivot(arr , 5);

    return 0;
}