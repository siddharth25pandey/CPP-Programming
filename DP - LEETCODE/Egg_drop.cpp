
#include<bits/stdc++.h>
using namespace std;


class Solution
{
    public:
    //Function to find minimum number of attempts needed in 
    //order to find the critical floor.
    int static dp[201][201] ;
    
    int solve(int e , int f)
    {
        if(f == 0 || f == 1 || e == 1)
            return f ;
            
        if(dp[e][f] != -1)
            return dp[e][f] ;
        
        int down , up , ans = INT_MAX ;
        for(int k = 1 ; k <= f ; k++){
            if(dp[e-1][k-1] != -1)
                down = dp[e-1][k-1] ;
            else{
                down = solve(e-1 , k-1) ;
                dp[e-1][k-1] = down ;
            }
            
            if(dp[e][f-k] != -1)
                up = dp[e][f-k] ;
            else{
                up = solve(e , f-k) ;
                dp[e][f-k] = up ;
            }
            
            int tmp = 1 + max(up , down) ;
            ans = min(ans, tmp) ;
        }
        
        return dp[e][f] = ans ;
    }
    
    int eggDrop(int n, int k) 
    {
        // your code here
        memset(dp , -1 , sizeof(dp)) ;
        return solve(n,k) ;
    }
};

int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking eggs and floors count
        int n, k;
        cin>>n>>k;
        Solution ob;
        //calling function eggDrop()
        cout<<ob.eggDrop(n, k)<<endl;
    }
    return 0;
}

// } Driver Code Ends