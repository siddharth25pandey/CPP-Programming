// { Driver Code Starts
#include <iostream>
using namespace std;

int isPalinUtil(int N, int rev);

bool isPalin(int N);

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        cout << isPalin(N) << endl;
    }
    return 0;
} // } Driver Code Ends

//User function Template for C++

void rev(int n, int &res)
{
    if (n == 0)
    {
        return;
    }
    res = res * 10 + n % 10;
    rev(n / 10, res);
}

bool isPalin(int n)
{
    //Your code here
    //You may use a helper function if you like
    int res = 0;
    rev(n, res);
    return n == res;
}