
#include <bits/stdc++.h>
using namespace std;
 

 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n)
    {
        // Your code here
        string s="";
        string p="";
        for(int i=7;i>=0;i--)
        {
            s+=to_string((m>>i)&1);
             p+=to_string((n>>i)&1);
          
        }
        
       for(int j=s.size();j>=0;j--)
       {
           if(s[j]!=p[j])
           {
               return s.size()-j;
           }
       }
       // return -1;
    }
};

// { Driver Code Starts.

// Driver Code
int main()
{   
    int t;
    cin>>t; //input number of testcases
    while(t--)
    {
         int m,n;
         cin>>m>>n; //input m and n
         Solution ob;
         cout << ob.posOfRightMostDiffBit(m, n)<<endl;
    }
    return 0;     
}   // } Driver Code Ends