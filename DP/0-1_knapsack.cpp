#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       
         int i, w;
         vector<vector<int>> K(n + 1, vector<int>(W + 1));
 
         for(i = 0; i <= n; i++)
    {
            for(w = 0; w <= W; w++)
        {
            if (i == 0 || w == 0)//boundary case 
                K[i][w] = 0;
                
            else if (wt[i - 1] <= w) //if capacity of bag is larger than the weight of nth element
                K[i][w] = max(val[i - 1] +
                                K[i - 1][w - wt[i - 1]],
                                K[i - 1][w]);
            else
                //weight of ith element is larger than capacity
                K[i][w] = K[i - 1][w];
        }
    }
    return K[n][W];
}
    
};


int main()
 {
   
        //reading number of elements and weight
        
        int n, w; // n: number items ,w: capacity of knapsack
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
        
    
	return 0;
}
