#include <iostream>
using namespace std;

int main() {
    int n;
    long double fact = 1.0;

    cout << "Enter a non-negative integer: ";
    cin >> n;

    if (n < 0)
        cout << "Factorial does not exist";

    else if (n==0||n==1)
    {
        cout<<"1";
    }


    else {
        for(int i = 1; i <= n; ++i) {
            fact *= i;
        }
        cout << "Factorial of " << n << " = " << fact;
    }

    return 0;
}

