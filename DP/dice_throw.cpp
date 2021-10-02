
#include <iostream>
#include <string.h>
using namespace std;

// The main function that returns number of ways to get sum 'x'
// with 'n' dice and 'm' with m faces.
int findWays(int m, int n, int x)
{
	int table[n + 1][x + 1];
	memset(table, 0, sizeof(table)); // Initialize all entries as 0

	// Table entries for only one dice
	for (int j = 1; j <= m && j <= x; j++)
		table[1][j] = 1;

	// Fill rest of the entries in table using recursive relation
	// i: number of dice, j: sum
	for (int i = 2; i <= n; i++)
		for (int j = 1; j <= x; j++)
			for (int k = 1; k <= m && k < j; k++)
				table[i][j] += table[i-1][j-k];

	
	return table[n][x];
}

// Driver program to test above functions
int main()
{
	cout << findWays(4, 2, 1) << endl;
	cout << findWays(2, 2, 3) << endl;
	cout << findWays(6, 3, 8) << endl;
	cout << findWays(4, 2, 5) << endl;
	cout << findWays(4, 3, 5) << endl;

	return 0;
}
