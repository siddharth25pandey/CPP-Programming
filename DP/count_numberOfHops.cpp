// A Dynamic Programming based C++ program to count number of ways
#include<iostream>
using namespace std;
 
int printCountDP(int dist)
{
        //Create the array of size 3.
        int  ways[3] , n = dist;
        
        //Initialize the bases cases
        ways[0] = 1;
        ways[1] = 1;
        ways[2] = 2;
        
        //Run a loop from 3 to n
        //Bottom up approach to fill the array
        for(int i=3 ;i<=n ;i++)
            ways[i%3] = ways[(i-1)%3] + ways[(i-2)%3] + ways[(i-3)%3];
        
        return ways[n%3];
}
 
// driver program
int main()
{
    int dist = 4;
    cout << printCountDP(dist);
    return 0;
}
