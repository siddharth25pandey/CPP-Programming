#include <bits/stdc++.h>
using namespace std;

bool CanPlaceCows(vector<int>& arr,int n,int diff,int cows){
    int count = 1;
    int coordinate = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]-coordinate >= diff){
            count++;
            coordinate = arr[i];
        }
        if(count==cows)return true;
    }
    return false;
}

int Agressivecows(vector<int>& arr,int n,int cows){
    sort(arr.begin(),arr.end());
    int start = 1;
    int end = arr[n-1] - arr[0];
    int res = 0;
    while(start<=end){
        int mid = start + (end-start)/2;
        
        if(CanPlaceCows(arr,n,mid,cows)){
            res = mid;
            start = mid+1;
        }else{
            end = mid-1;
        }
    }
    return res;
}

int main()
{
	int t;
	cin>>t;
	while(t--){
	    int n,cows;
	    cin>>n>>cows;
	    vector<int> arr(n);
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    cout<<Agressivecows(arr,n,cows)<<endl;
	}
	return 0;
}

