#include <iostream>
#include <unistd.h>
using namespace std;
 // code for swaping the elements
void swap(int *p, int *q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}
 
// A function to implement bubble sort
void bubbleSort(int *arr, int n)
{
    int i, j;
    for (i = 0; i < n-1; i++) {   
     
    // Last i elements are already in place
    for (j = 0; j < n-i-1; j++){
        if (arr[j] > arr[j+1])
            swap(&arr[j], &arr[j+1]);
     }
    }   
}
 
//function to print array
void printArray(int *arr, int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
 
// Driver code
int main()
{
  srand((unsigned) getpid());
  int n;
  cout<<"choose the no of values"<<"\n";
  cin>>n;
    int *arr = (int*)malloc(n*sizeof (int));
    
  for(int i=0;i<n;i++)
    arr[i]  = 0 +rand()%101; // function selects any random value between 0 and 100
  cout<<"Unsorted array:\n";
  printArray(arr,n);
    bubbleSort(arr, n);
    cout<<"Sorted array: \n";
    printArray(arr, n);
    return 0;
}
 
