#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cout<<"Enter the row and column"<<endl;
    cin >> n >> m;
    int arr[n][m];
    int x;
    cout << "Enter the value on number you want to search...." << endl;
    cin >> x;
    cout<<"Enter the element of array"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    bool flag = false;
    cout << "the matrix is .. " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Element at index" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if (arr[i][j] == x)
            {
                cout << i << j << " ";
                flag = true;
            }
        }
    }

    if (flag)
    {
        cout << "element is found" << endl;
    }
    else
    {
        cout << endl<<"Element is not found" << endl;
    }

    return 0;
}