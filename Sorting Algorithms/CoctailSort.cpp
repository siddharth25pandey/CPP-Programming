// C++ implementation of Cocktail Sort
#include <bits/stdc++.h>
using namespace std;
#include<time.h>


void CocktailSort(int a[], int n)
{
	bool swapped = true;
	int start = 0;
	int end = n - 1;

	while (swapped) {
		
		swapped = false;

		
		for (int i = start; i < end; ++i) {
			if (a[i] > a[i + 1]) {
				swap(a[i], a[i + 1]);
				swapped = true;
			}
		}

	
		if (!swapped)
			break;

		
		swapped = false;

		
		--end;

		
		for (int i = end - 1; i >= start; --i) {
			if (a[i] > a[i + 1]) {
				swap(a[i], a[i + 1]);
				swapped = true;
			}
		}

		
		++start;
	}
}


void printArray(int a[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
}


int main()
{
	int a[] = { 5, 1, 4, 2, 8, 0, 2 };
	int n = sizeof(a) / sizeof(a[0]);
    clock_t st,ft;
    double tt;
    st=clock();
	CocktailSort(a, n);
    ft=clock();
    tt=((double)ft-st);
	printf("Sorted array :\n");
    cout<<"Execution time:"<<tt;
	printArray(a, n);
	return 0;
}
