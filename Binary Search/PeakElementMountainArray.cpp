#include<iostream>
using namespace std;

int peakElement(int arr[] , int size ){
    int start = 0;
    int end = size - 1;
    int mid = start + (end- start)/2;

    while (start < end)
    {
        if (arr[mid] < arr[mid+1]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return mid;
}


int main(){

    int arr[10] = {24, 69, 100, 99 , 79 , 78 , 67 , 36, 26 , 19};

    int ans = peakElement(arr , 10);

    cout << "Peak Element - " << ans << endl;

    return 0;
}