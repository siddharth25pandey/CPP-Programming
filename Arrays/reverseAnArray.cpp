//Program to reverse the given array.
#include<iostream>

using namespace std;

void readArray(int array[], int size){
    for(int i = 0; i < size; i++){
        cin >> array[i];
    }
}

void printArray(int array[], int size){
    for(int i = 0; i < size; i++){
        cout << array[i];
    }
}

void reversArray(int array[], int size){
    int start = 0, end = size - 1;

    while(start <= end){
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;
        start++;
        end--;
    }
}

int main(){
    int size;
    cin >> size;
    int array[size];
    readArray(array, size);
    cout << "Orignal Array " << endl;
    printArray(array, size);

    cout << endl << "Reversed Array "<< endl;
    reversArray(array, size);
    printArray(array, size);
    return 0;
}