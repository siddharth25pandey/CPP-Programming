#include <iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int rob(vector<int>& nums) {
     
       int n=nums.size();
       if(n==0)
       {
           return 0;
       }
        int arr[n];
        memset(arr,0,sizeof(arr));
        if(n>=1)
        {
            arr[0]=nums[0];
        }
        if(n>=2)
        {
            arr[1]=max(nums[1],nums[0]);
        }
        for(int i=2;i<n;i++)
        {
            arr[i]=max(arr[i-1],arr[i-2]+nums[i]);
        }
        return arr[n-1];
}
    
    
    
int main() {
     int n;
     cin>>n;
     vector<int>nums;
     
     for(int i=0;i<n;i++)
     {
        int m;
        cin>>m;
        nums.push_back(m); 
     }
     cout<<rob(nums);
	return 0;
}
