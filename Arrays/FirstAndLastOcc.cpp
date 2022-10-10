//Find the first and last index of a given element in a sorted array.

#include<iostream>
using namespace std;

int readArray(int array[], int size){
    for(int i = 0; i < size; i++){
        cin >> array[i];
    }

    
}

int firstOcc(int array[], int size, int target){
    int start = 0;
    int end = size - 1;
    int ans = -1;

    while(start <= end){

        int mid = start + (end - start) / 2;

        if(array[mid] == target){
            ans = mid;
            end = mid - 1;
        }else if( array[mid] > target){
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }

    return ans; 
}

int lastOcc(int array[], int size, int target){
    int start = 0;
    int end = size - 1;
    int ans = - 1;

    while(start <= end){

        int mid = start + (end - start) / 2;

        if(array[mid] == target){
            ans = mid;
            start = mid + 1;
        }else if( array[mid] > target){
            end = mid - 1;
        }else{
            start = mid + 1;
        }
    }

    return ans; 
}

int main(){
    int size, target;
    cin >> size;
    int array[size];
    readArray(array, size);
    cout << "Enter the target element : " << endl;
    cin >> target;

    cout << "Start index " << firstOcc(array, size, target) << endl;
    cout << "Last index " << lastOcc(array, size, target) << endl;

}