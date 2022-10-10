#include<iostream>
using namespace std;

int firstOccurence(int arr[], int size , int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;

    int ans = -1;

    while ( start <= end){
        if (arr[mid]==key){
            ans = mid;
            end = mid - 1;
        }
        else if ( key > arr[mid]){
            start = mid + 1;
        }
        else if ( key < arr[mid]){
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}

int lastOccurence(int arr[], int size , int key ){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while ( start <= end ){
        if ( arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        else if ( key > arr[mid]){
            start = mid + 1;
        }
        else if (key < arr[mid]){
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int main(){

    int arr[11] = {1,2,4,4,5,5,5,6,8,9,10};

    int firstOcc = firstOccurence(arr , 11 , 5);
    int lastOcc = lastOccurence(arr , 11, 5);

    int totalOcc = (lastOcc - firstOcc) + 1;

    cout << "The First Occurence of 5 is at index - " << firstOcc << endl;
    cout << "The Last Occurence of 5 is at index  - " << lastOcc << endl;
    cout << "The Total Number of Occurence of 5 is " << totalOcc << endl;


    return 0;
}