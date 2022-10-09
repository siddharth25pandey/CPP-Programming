/***********************************************
Problem: Running sum of 1d Array

If an array 'l' is given, running sum of l[i]
is given by l[0] + l[1] + ... + l[i]
where i is the index of element in l

Topic: Prefix Sum(Comes in DP)

Sample I/O:
l = [1,2,3,4]
running sum l = [1,3,6,10]
***********************************************/


#include <iostream>
using namespace std;

int main(){
	int n; 
	cout << "Enter the number of elements in the given array: " ;
	//taking the input of number of elements
	cin >> n;
	int arr[n];
	//taking input of elements
	cout << "Enter the elements" << endl;
	for (int i = 0; i < n; i++){
		cin >> arr[i];
	}
	
	//running sum in O(n) Time complexity
	for (int i = 1; i < n; i++){
		arr[i] += arr[i-1];
	}
	
	//printing the array
	for (int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
}
