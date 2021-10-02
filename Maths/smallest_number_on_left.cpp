// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


// User function Template for C++

class Solution{
public:
    vector<int> leftSmaller(int n, int a[]){
        vector<int>v;
         v.push_back(-1);
        for(int i=1;i<n;i++)
        
        {
            int j;
            for( j=i-1;j>=0;j--)
            {
                if(a[j]<a[i])
                {
                    v.push_back(a[j]);
                    break;
                }
            }
            if(j==-1)
        {
            v.push_back(-1);
        }
        }
        return v;
        
        // code here
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0;i < n;i++)
            cin>>a[i];
        
        Solution ob;
        vector<int> ans = ob.leftSmaller(n, a);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends