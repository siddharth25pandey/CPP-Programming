#include <bits/stdc++.h>

/*
What we're actually using
#include <queue>
#include <iostream>
*/

using namespace std;

// These arrays are used for helping us travel in the 4 directions
int di[] = {-1, 0, 1, 0}; 
int dj[] = {0, 1, 0, -1};


// These constants will be the size of our 2d array
const int n = 5, m = 5;

// Our 2d array
int vec[n][m];

void Lee(int istart ,int jstart)
{
    queue<pair<int,int>> Q;

    Q.push(make_pair(istart , jstart));

    // This is our start position
    vec[istart][jstart] = 1;
    while(! Q.empty()) 
    {   
        int i = Q.front().first, j = Q.front().second;
        for(int k = 0 ; k < 4 ; k ++)
        {
            int iv = i + di[k], jv = j + dj[k]; // our neighbour's coordinates
            if
            (iv >= 0 && iv < n && jv >= 0 && jv < m && vec[iv][jv] == 0) // a free element of the array
            {
                vec[iv][jv] = vec[i][j] + 1;

                Q.push(make_pair(iv , jv));
            }
        }
        Q.pop(); 
    }
}



int main(){
    cout << "Reading the array \n Please give 5 x 5 elements \n Where -1 is an obstacle and 0 is a free space \n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> vec[i][j];
        }
    }
    Lee(0,0);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << vec[i][j] << " "; 
        }
        cout << '\n';
    }
    return 0;
}