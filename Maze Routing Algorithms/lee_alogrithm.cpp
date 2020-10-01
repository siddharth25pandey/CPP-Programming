#include <queue>
#include <iostream>

using namespace std;

// These arrays are used for helping us travel in the 4 directions
int di[] = {-1, 0, 1, 0}; 
int dj[] = {0, 1, 0, -1};


// These constants will be the size of our 2d array
const int n = 5, m = 5;

// Our 2d array
int vec[n][m] = {{ 0,  0, 0, -1, 0},
                 {-1, -1, 0, -1, 0},
                 {-1, 0,  0, -1, 0},
                 {-1, 0, -1, 0, -1},
                 {-1, 0,  0, 0,  0}};

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
    Lee(0,0);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << vec[i][j] << " "; 
        }
        cout << '\n';
    }
    return 0;
}