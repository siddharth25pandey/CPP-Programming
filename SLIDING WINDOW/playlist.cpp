/*
You are given a playlist of a radio station since its establishment. The playlist has a total of n songs.

What is the longest sequence of successive songs where each song is unique?

Input

The first input line contains an integer n: the number of songs.

The next line has n integers k1,k2,…,kn: the id number of each song.

Output

Print the length of the longest sequence of unique songs.

Constraints
1≤n≤2⋅105
1≤ki≤109
Example

Input:
8
1 2 1 3 2 7 4 2

Output:
5
*/

#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<unordered_map>
#include<queue>
#include<map>
#include<math.h>
#include<set>
using namespace std;
#define ll long long 
 
//set<string> st;
 
int main() {
    int n;
    cin>>n;
 
    vector<int> v(n);
 
    for(int i=0;i<n;i++)
    cin>>v[i];
    
    //vector<int> m(k,-1);
    map<int,int> m;
    int i=0,j=0;
    int ans=0;
 
    for(i=0,j=0;i<n;i++) {
        j = max(m[v[i]],j);
 
        ans = max(ans,i-j+1);
 
        m[v[i]] = i+1;
    }
 
    cout<<ans<<"\n";
 
    return 0;
}