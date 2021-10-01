// C++ program of Next Greater Frequency Element
#include <bits/stdc++.h>
using namespace std;

stack<pair<int,int>> mystack;
map<int, int> mymap;

/*NFG function to find the next greater frequency
element for each element and for placing it in the
resultant array */
void NGF(int arr[], int res[], int n) {
	
	// Initially store the frequencies of all elements
	// in a hashmap
	for(int i = 0; i < n; i++) {
		mymap[arr[i]] += 1;
	}
	
	// Get the frequency of the last element
	int curr_freq = mymap[arr[n-1]];
	
	// push it to the stack
	mystack.push({arr[n-1], curr_freq});
	
	// place -1 as next greater freq for the last
	// element as it does not have next greater.
	res[n-1] = -1;
	
	// iterate through array in reverse order
	for(int i = n-2;i>=0;i--) {
		curr_freq = mymap[arr[i]];
		
		/* If the frequency of the element which is
		pointed by the top of stack is greater
		than frequency of the current element
		then push the current position i in stack*/
		while(mystack.size() > 0 && curr_freq >= mystack.top().second)
			mystack.pop();
		
		// If the stack is empty, place -1. If it is not empty
		// then we will have next higher freq element at the top of the stack.
		res[i] = (mystack.size() == 0) ? -1 : mystack.top().first;
		
		// push the element at current position
		mystack.push({arr[i], mymap[arr[i]]});
	}
}
	
int main()
{
	int arr[] = {1, 1, 1, 2, 2, 2, 2, 11, 3, 3};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	int res[n];
	NGF(arr, res, n);
	cout << "[";
	for(int i = 0; i < n - 1; i++)
	{
		cout << res[i] << ", ";
	}
	cout << res[n - 1] << "]";

	return 0;
}

// This code is contributed by divyeshrabadiya07.
