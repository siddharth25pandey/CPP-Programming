#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Binary Search algo is helpfull for searching an element in array which is in sorted menar
    
    int arr[]={1,3,5,11,12,15,18,20}; // 8 elements is present in the array
    int val=18;
    int start=0,end=7; //starting and ending pointers
 
    while(start<=end)
    {
        int mid = (start+end)/2;

        // If size of array is 10^7 than start+end might be > 10^8 (Error :int overflow)
        // for that you can use...

        // mid = start + ( end - start )/2

        if(arr[mid]==val)
        {
             cout<<"element is at index :"<<mid<<endl;
             break;
        }
        else if(arr[mid]>val)
        {
            end=mid-1;
        }
        else if(arr[mid]<val)
        {
            start=mid+1;
        }
    }

    return 0;

}