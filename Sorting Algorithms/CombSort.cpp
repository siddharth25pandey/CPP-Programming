
#include<bits/stdc++.h>
using namespace std;

int getNextGap(int gap)
{

	gap = (gap*10)/13;

	if (gap < 1)
		return 1;
	return gap;
}

void combSort(int a[], int n)
{
	int gap = n;

	bool swapped = true;

	while (gap != 1 || swapped == true)
	{
		gap = getNextGap(gap);
		swapped = false;
		for (int i=0; i<n-gap; i++)
		{
			if (a[i] > a[i+gap])
			{
				swap(a[i], a[i+gap]);
				swapped = true;
			}
		}
	}
}

int main()
{
  printf("\n\t\tCOMB SORT\n\n");
  int arr[] = {23, 78, 1, 56, 3, 2345, 23, 45, 28, 209};
	int n = sizeof(arr)/sizeof(arr[0]);

  printf("\nArray Before Sorting is: ");
  for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
  }
	combSort(arr, n);

	printf("\nArray after Sorting: \n");
	for (int i=0; i<n; i++){
		printf("%d ", arr[i]);
  }
  printf("\n");
	return 0;
}
