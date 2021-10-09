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
        if(n==1)
        {
            return nums[0]; 
        }
        if(n==2)
        {
            return max(nums[0],nums[1]);
        }
        
        int arr[n-1];
        int arr1[n-1];
        if(n>=1)
            arr[0]=nums[0];
        if(n>=2)
            arr[1]=max(nums[1],nums[0]);
        
        
        
        
        
        for(int i=2;i<n-1;i++)
        {
           arr[i]=max(arr[i-2]+nums[i],arr[i-1]);
        }
        
        
        
        
        reverse(nums.begin(),nums.end());
        
        if(n>=1)
            arr1[0]=nums[0];
        if(n>=2)
            arr1[1]=max(nums[0],nums[1]);
        for(int i=2;i<n-1;i++)
        {
            arr1[i]=max(arr1[i-2]+nums[i],arr1[i-1]);
        }
        
       
        return max(arr[n-2],arr1[n-2]);
        
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
