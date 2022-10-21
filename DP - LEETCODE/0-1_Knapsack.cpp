
#include<bits/stdc++.h>
using namespace std;


    //Function to return max value that can be put in knapsack of capacity W.
    int static dp[1002][1002] ;
    
    
    int knapsack(int w, int wt[], int val[], int n) 
    { 
       if(n == 0 or w == 0){
           return 0 ;
       }
       
       if(dp[n][w] != -1){
           return dp[n][w] ;
       }
       
       int nextIndex = n - 1 ;
       int redWt = w - wt[nextIndex] ;
       
       if(redWt >= 0)
       {
           return dp[n][w] = max(val[nextIndex]+knapsack(w-wt[nextIndex] , wt , val , nextIndex) , knapsack(w , wt , val , nextIndex)) ;
       }
       
       else if(redWt < 0){
           return dp[n][w] = knapsack(w , wt , val , nextIndex) ;
       }
    }
    
    class Solution{
        
        public :
        
        int knapSack(int W , int wt[] , int val[] , int n){
            memset(dp , -1 , sizeof(dp)) ;
            int res ;
            res = knapsack(W , wt , val , n) ;
            
            return res ;
        }
        
    } ;


int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}