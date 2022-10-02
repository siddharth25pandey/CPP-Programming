#include <bits/stdc++.h>
using namespace std;

int peakEle(vector<int>& a,int n){
    int low = 0,high = n-1;
    while(low<=high){
        int mid = (low+high)/2;
        
        if((mid==0 or a[mid]>a[mid-1]) and (mid==n-1 or a[mid]>a[mid+1])){
            return mid;
        }
        else if(a[mid]>a[mid-1]){
            low = mid+1;
        }else{ //nums[mid]>nums[mid+1]
            high = mid;
        }
    }
    return -1;
}
int BinaryAsc(vector<int>& a,int target,int start,int end){
    if(start>end)return -1;
    while(start<=end){
        int mid = (start+end)/2;
        if(a[mid]==target){
            return mid;
        }
        else if(a[mid]>target){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return -1;
}

int BinaryDesc(vector<int>& a,int target,int start,int end){
    if(start>end)return -1;
    while(start<=end){
        int mid = (start+end)/2;
        if(a[mid]==target){
            return mid;
        }
        else if(a[mid]<target){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return -1;
}
// 2 4 6 10 5 3
int findele(vector<int>&a,int n,int target){
    int peak = peakEle(a,n);
    int r1 = BinaryAsc(a,target,0,peak-1);
    int r2 = BinaryDesc(a,target,peak,n-1);
    return max(r1,r2);
}


int main()
{
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	int target = 5;
	cout<<findele(a,n,target);
	return 0;
}

