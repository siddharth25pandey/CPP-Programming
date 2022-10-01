// Given information about N petrol pumps (say arr[]) that are present in a circular path. 
// The information consists of the distance of the next petrol pump from the current one (in arr[i][0]) 
// and the amount of petrol stored in that petrol pump (in arr[i][1]). 
// Consider a truck with infinite capacity that consumes 1 unit of petrol to travel 1 unit distance. 
// The task is to find the index of the first starting point such that the truck can visit all the petrol pumps and come back to that starting point.

// Note: Return -1 if no such tour exists.

// C++ program to find circular tour for a truck
#include <bits/stdc++.h>
using namespace std;
 
// A petrol pump has petrol and distance to next petrol pump
class petrolPump
{
    public:
    int petrol;
    int distance;
};
 
// The function returns starting point if there is a possible solution,
// otherwise returns -1
int printTour(petrolPump arr[], int n)
{
    // Consider first petrol pump as a starting point
    int start = 0;
    int end = 1;
 
    int curr_petrol = arr[start].petrol - arr[start].distance;
 
    /* Run a loop while all petrol pumps are not visited.
    And we have reached first petrol pump again with 0 or more petrol */
    while (end != start || curr_petrol < 0)
    {
        // If current amount of petrol in truck becomes less than 0, then
        // remove the starting petrol pump from tour
        while (curr_petrol < 0 && start != end)
        {
            // Remove starting petrol pump. Change start
            curr_petrol -= arr[start].petrol - arr[start].distance;
            start = (start + 1) % n;
 
            // If 0 is being considered as start again, then there is no
            // possible solution
            if (start == 0)
            return -1;
        }
 
        // Add a petrol pump to current tour
        curr_petrol += arr[end].petrol - arr[end].distance;
 
        end = (end + 1) % n;
    }
 
    // Return starting point
    return start;
}
 
// Driver code
int main()
{
    petrolPump arr[] = {{6, 4}, {3, 6}, {7, 3}};
 
    int n = sizeof(arr)/sizeof(arr[0]);
    int start = printTour(arr, n);
 
    (start == -1)? cout<<"No solution": cout<<"Start = "<<start;
 
    return 0;
}
