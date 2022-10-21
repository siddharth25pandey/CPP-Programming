/*  Pattern that we are going to make:

        *                  *
        * *              * *
        * * *          * * *
        * * * *      * * * *
        * * * * *  * * * * *
        * * * * *  * * * * *
        * * * *      * * * *
        * * *          * * *
        * *              * *
        *                  *

The question is divided into 2 parts ie, Upper part and Lower part
The code is as follows:   */


#include <bits/stdc++.h>
using namespace std; 
int main()
{
    int i, j, n;
    cin >> n;
    // upper half of the pattern
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < (2 * n); j++)
        {
                // upper left triangle
            if(i >= j) 
                cout << "*";
            else
                cout << " ";
                // upper right triangle
            if(i >= (2 * n - 1) - j)  
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
    // bottom half of the pattern
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < (2 * n); j++)
        {
                // bottom left triangle
            if(i + j <= n - 1)  
                cout << "*";
            else
                cout << " ";
                // bottom right triangle
            if((i + n) <= j)  
                cout << "*";
            else
                cout << " ";
        }
        cout << "\n";
    }
    return 0;
}
