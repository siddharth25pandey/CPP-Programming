#include<iostream>
using namespace std;

// n - array size
// m - student

bool isPossible(int arr[] , int n , int m , int mid){
    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < n ; i++){
        if( pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            if (studentCount > m || arr[i] > mid)
            {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}
// n - array size
// m - student
int allocateBooks (int arr[] , int n , int m)
{
    int s = 0 ;
    int sum = 0;

    for(int i = 0 ; i < n ; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    int ans = -1;
    int mid = s + (s-e)/2;

    while ( s <= e)
    {
        if (isPossible(arr , n , m , mid))
        {
            ans = mid;
            s = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (s-e)/2;
    }
    return ans;
}

int main(){

    int arr[4] = {12, 34, 67, 90};

    cout << "Books allocated to each student is -- " << allocateBooks(arr , 4 , 2) << endl;

    return 0;
}