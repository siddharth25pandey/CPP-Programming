#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long toh(int N, int from, int to, int aux)
    {
        // Your code here
        long long int steps = pow(2, N) - 1;
        if (N == 1)
        {
            printf("move disk 1 from rod %d to rod %d\n", from, to);
            return steps;
        }
        toh(N - 1, from, aux, to);
        printf("move disk %d from rod %d to rod %d\n", N, from, to);
        toh(N - 1, aux, to, from);

        return steps;
    }
};

// { Driver Code Starts.

int main()
{
    int T;
    //testcases
    cout << "No of test cases: ";
    cin >> T; 
    int count=1;
    while (T--)
    {
        cout <<"\nTest case : " << count;
        int N;
        //taking input N
        cout << "\nNo of disks: ";
        cin >> N;

        //calling toh() function
        Solution ob;
        cout << "\nNo of moves required " << endl;
        cout << ob.toh(N, 1, 3, 2) << " steps taken to complete " << endl;
        count++;
    }
    return 0;
}

// } Driver code ends