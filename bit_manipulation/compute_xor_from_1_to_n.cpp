#include <bits/stdc++.h>
using namespace std;

/* program that computes XOR from 1 to N */
int computeXOR(int n)
{
    if (n % 4 == 0)
        return n;
    if (n % 4 == 1)
        return 1;
    if (n % 4 == 2)
        return n + 1;
    else
        return 0;
}

int main()
{
    int N;
    cin >> N;
    cout << computeXOR(N) << "\n";
}

/*
Complexity:
    Time: O(1);
    Space: O(1);
*/