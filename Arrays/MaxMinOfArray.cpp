//Program to find the max and min element of the array.

#include<iostream>
#include<limits.h>
using namespace std;

void readArray(int array[], int size){

    for(int i = 0; i < size; i++){
        cin >> array[i];
    }
}

void findMinMax(int array[], int size){
    int min = array[0];
    int max = min;

    for(int i = 0; i <size; i++){

        if(min > array[i]){
            min = array[i];
        }
        if(max < array[i]){
            max = array[i];
        }
    }
    cout << "Minimum Value = " << min << endl 
         << "Maximum Value = " << max << endl;
}

int main(){

    int array[5];
    readArray(array, 5);

    findMinMax(array, 5);

    return 0;
}