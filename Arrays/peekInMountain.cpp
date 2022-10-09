/*
An array arr a mountain if the following properties hold:

arr.length >= 3
There exists some i with 0 < i < arr.length - 1 such that:
arr[0] < arr[1] < ... < arr[i - 1] < arr[i]
arr[i] > arr[i + 1] > ... > arr[arr.length - 1]
Given a mountain array arr, return the index i such that
 arr[0] < arr[1] < ... < arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].

You must solve it in O(log(arr.length)) time complexity.

 

Example 1:

Input: arr = [0,1,0]
Output: 1
Example 2:

Input: arr = [0,2,1,0]
Output: 1
Example 3:

Input: arr = [0,10,5,2]
Output: 1
*/
#include<iostream>
using namespace std;

void readArray(int array[], int size){
    for(int i = 0; i < size; i++){
        cin >> array[i];
    }
}

int findPeekElement(int array[], int size){
    int start = 0, end = size - 1;

    while(start < end){
        int mid = start + (end - start) / 2;
        if(array[mid] < array[mid + 1]){
            start = mid + 1;
        }else{
            end = mid;
        }
    }
    return start;
}

int main(){
    int size;
    cin >> size;
    int array[size];
    cout << "Enter the Array Elements " << endl;
    readArray(array, size);
    cout << "Peek Element : " << array[findPeekElement(array, size)] << endl;
}