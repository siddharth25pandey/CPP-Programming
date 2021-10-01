#include<bits/stdc++.h>

using namespace std;
  
void swapVal(int *p, int *q) {
    int *temp = p;
    p = q;
    q = temp;
    return;
}
  
void InsertionSort(int arr[], int *first, int *last) {
    
    int right = last - arr;
    int left = first - arr;
  
    for (int i = left+1; i <= right; i++)
    {
        int key = arr[i];
        int j = i-1;
  
        while (j >= left && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
   }
  
   return;
}
  
int* Partition(int arr[], int low, int high) {
    int pivot = arr[high];   
    int i = (low - 1);  
  
    for (int j = low; j <= high- 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
  
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (arr + i + 1);
}
  
  
int *Median_of_3(int * p, int * q, int * r) {
    if (*p < *q && *q < *r)
        return (q);
  
    if (*q <= *p && *p < *r)
        return (p);
    
    if (*p < *r && *r <= *q)
        return (r);

    if (*q < *r && *r <= *p)
        return (r);
  
    if (*r <= *p && *p < *q)
        return (p);
  
    if (*r <= *q && *q <= *p)
        return (q);
}
  
void IntropectiveSorting(int arr[], int * first, int * last, int depth_Limit) {
    int size = last - first;
  
    if (size < 16)  {
        InsertionSort(arr, first, last);
        return;
    }
  
    if (depth_Limit == 0)
    {
        make_heap(first, last+1);
        sort_heap(first, last+1);
        return;
    }
  
    int * pivot = Median_of_3(first, first+size/2, last);
  
    swapVal(pivot, last);
  
    int * partitionPoint = Partition(arr, first-arr, last-arr);

    IntropectiveSorting(arr, first, partitionPoint-1, depth_Limit - 1);

    IntropectiveSorting(arr, partitionPoint + 1, last, depth_Limit - 1);
  
    return;
}
  
void Introsort(int arr[], int *first, int *last) {
    int depth_Limit = 2 * log(last-first);
  
    IntropectiveSorting(arr, first, last, depth_Limit);
  
      return;
}
  
void printArray(int arr[], int n) {
   for (int i=0; i < n; i++)
       printf("%d ", arr[i]);
   printf("\n");
}
  
int main() {
    int arr[] = {57, 12, 99, 19, 23, 153, 5713, 312, -9};

    int n = sizeof(arr) / sizeof(arr[0]);
  
    Introsort(arr, arr, arr+n-1);
    printArray(arr, n);
  
    return(0);
}