//Finding the Pivot Element.
#include<iostream>
using namespace std;

void readArray(int nums[], int size){
    for(int i = 0; i < size; i++){
        cin >> nums[i];
    }
}

int findPivot(int nums[], int size, int target){
    int low=0;
int high= size-1;
int mid=low+(high-low)/2;

    while(low <= high){
        if(nums[mid] == target)
            return mid;
        
        
        else if(nums[low] <= nums[mid]){
            if(nums[low] <= target && nums[mid] > target)
                high=mid-1;
            else
                low=mid+1;
        }
        
        else if(nums[mid] <= nums[high]){
            if(nums[mid] < target && nums[high] >= target){
                low=mid+1;
            }
            else
                high=mid-1;
        }
        
        mid=low+(high-low)/2;
    }
    return -1;
}

int main(){
    int size, target;
    cin >> size;
    int nums[size];
    cout << "Enter the element : " << endl;
    readArray(nums, size);
    cout << "Enter the Target : " << endl;
    cin >> target;

    cout << "Pivot Element index is: " << findPivot(nums, size, target) << endl;


}