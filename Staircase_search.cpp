#include <iostream>
using namespace std;
int staircaseSearch(int arr[][100], int n, int key)
{
    int i = 0;
    int j = n - 1;
    while (i <= n && j >= 0)
    {
        if (arr[i][j] == key)
        {
            cout << "Number found at (" << i+1 << "," << j+1 << ")\n";
            return 1;
        }
        else if (arr[i][j] < key)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    cout << "Number not found\n";
}
int main()
{
    int n;
    cin >> n;
    int arr[100][100] = {0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int key;
    cin >> key;
    staircaseSearch(arr, n, key);
    return 0;
}
