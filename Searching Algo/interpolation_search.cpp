
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int interpolationSearch(int arr[], int n, int x)
{
	int start, end, pos;

	start = 0;	   //Starting point of array
	end = (n - 1); //Ending point of array

	while (start <= end && x >= arr[start] && x <= arr[end])
	{

		//interpolation main fromula
		pos = start + (((double)(end - start) /
						(arr[end] - arr[start])) *
					   (x - arr[start]));

		// if element found out at pos
		if (arr[pos] == x)
			return pos;

		// If x is larger than pos go further
		if (arr[pos] < x)
			start = pos + 1;

		// If x is smaller than pos go back
		else
			end = pos - 1;
	}
	return -1;
}

int main()
{
	int arr[10], x, n, i;

	cout << "\n Enter items: ";

	for (int i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}

	n = sizeof(arr);

	/*for (int i = 0; i < 5; i++){
		cout<<arr[i];
	}*/
	

	cout << "Enter the element to search:";
	cin >> x;

	int index = interpolationSearch(arr, n, x);

	// found , not found body
	if (index != -1)
		cout << "Element found at index: " << index;
	else
		cout << "Element not found!!";
	return 0;
}
