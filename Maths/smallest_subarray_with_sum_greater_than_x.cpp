#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:

    int sb(int arr[], int n, int x)
    {
        // Your code goes here 
        int sum=0;
        int ans=INT_MAX;
        int start=0;
        for(int i=0;i<n;i++)
        {   
            if(arr[i]>x) return 1;
            sum+=arr[i];
            if(sum>x)
            {
                ans=min(i-start+1,ans);
                while(sum>=x)
                {
                    sum-=arr[start];
                    start++;
                    if(sum>x)
                    {
                        ans=min(i-start+1,ans);
                    }
                }
            }
        }
        return ans;
    }
};

// { Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.sb(a,n,x)<<endl;
	}
	return 0;
}  // } Driver Code Ends