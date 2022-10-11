#include<iomanip>
#include<iostream>

using namespace std;

void DNFsort(int Arr[], int arr_size){
	int low = 0;
	int high = arr_size - 1;
	int mid = 0;
	while (mid <= high) {
		switch (Arr[mid]) {
		case 0:
			swap(Arr[low++], Arr[mid++]);
			break;
		case 1:
			mid++;
			break;
		case 2:
			swap(Arr[mid], Arr[high--]);
			break;
		}
	}
}

void printArray(int arr[], int arr_size){
	for (int i = 0; i < arr_size; i++)
		cout << arr[i] << " ";
}
int main()
{
	int arr[] = { 0,1,2,1,1,1,2,2,0};
	int n = sizeof(arr) / sizeof(arr[0]);
	DNFsort(arr, n);
	printArray(arr, n);
	return 0;
}

// This code is contributed by Shivi_Aggarwal
