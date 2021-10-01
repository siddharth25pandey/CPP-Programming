// C++ implementation of the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to find the maximum index
// i such that arr[i] is equal to i
void findLargestIndex(int arr[], int n)
{

	// Traversing the array from
	// backwards
	for (int i = n - 1; i >= 0; i--) {

		// If arr[i] is equal to i
		if (arr[i] == i) {
			cout << i << endl;
			return;
		}
	}

	// If there is no such index
	cout << -1 << endl;
}

// Driver code
int main()
{
	// Given Input
	int arr[] = { -10, -5, 0, 3, 7 };
	int n = sizeof(arr) / sizeof(arr[0]);

	// Function Call
	findLargestIndex(arr, n);
	return 0;
}
