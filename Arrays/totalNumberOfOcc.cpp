//Find the total number of a given x in the Sorted Array of size N.

#include<iostream>
using namespace std;

void readArray(int array[], int size){
    for(int i = 0; i < size; i++){
        cin >> array[i];
    }
}
int findFirstOcc(int array[], int size, int target){
    int start = 0, end = size - 1, ans = -1;
    while(start <= end){
        int mid = start + (end - start) / 2;

        if(array[mid] == target){
            ans = mid;
            end = mid - 1;
        }else if(array[mid] < target) {
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    return ans;
}

int findLastOcc(int array[], int size, int target){
    int start = 0, end = size - 1, ans = -1;
    
    while(start <= end){
        int mid = start + (end - start) / 2;

        if(array[mid] == target){
            ans = mid;
            start = mid + 1;
        }else if(array[mid] < target){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    return ans;
}

int findCount(int array[], int size, int target){
    int startPos, endPos;

    startPos = findFirstOcc(array, size, target);
    endPos = findLastOcc(array, size, target);
    return (endPos - startPos) + 1;
}

int main(){
    int size, target;
    cin >> size;
    int array[size];
    cout << "Enter the Array :" << endl;
    readArray(array, size);
    cout << "Enter the Target :" << endl;
    cin >> target;

    cout << "Total Count :" << findCount(array, size, target) << endl;

    return 0;
}