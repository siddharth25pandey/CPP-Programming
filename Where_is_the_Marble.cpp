// git-book link : https://jordy-bro.gitbook.io/golok/task-6-solutions#where-is-the-marble
// problem statement : https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1415
// author : Chinmay Lohani
// Date: 09.10.2022

#include <bits/stdc++.h>
#define ull unsigned long long

using namespace std;

int binarySearch(vector<ull> &arr, int l, int r, int x) 
{ 
    for(int i = l ; i <= r ; i++)
    {
        if(arr[i] == x)
        {
            return i;
        }
    }
    return 0;
}

int main() 
{
    ull cnt = 0;
    while(true)
    {
        ull n , q;
        cin >> n >> q;
        if(n == 0 && q == 0)
        {
            break;
        }
        
        cnt++;
        
        cout << "CASE# " << cnt << ":\n";
        
        vector<ull> v(n,0);
        
        for(int i = 0 ; i < n ; i++)
        {
            cin >> v[i];
            // cout << v[i] << " " ;
        }
        
        sort(v.begin(), v.end());
        
        while(q--)
        {
            int tmp;
            cin >> tmp;
            int pos = binarySearch(v , 0 , n-1 , tmp);
            
            if(v[pos] == tmp)
            {
                cout << tmp << " found at " << pos+1 << '\n';
            }
            else
            {
                cout << tmp << " not found\n";
            }
        }
        
    }
    
    
	return 0;
}
