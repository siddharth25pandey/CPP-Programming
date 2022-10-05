
#include <bits/stdc++.h>
using namespace std;
bool isValid(vector<int>& a,int n,int mx,int k){
    int students = 1;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum = sum + a[i];
        
        if(sum > mx){
            students++;
            sum = a[i];
        }
        if(students > k){
            return false;
        }
    }
    return true;
}
int allocatePages(vector<int>& a,int n,int k){
    int res = -1;
    if(k>n)return -1;
    int sum = 0, maxi = INT_MIN;
    for(int i=0;i<n;i++){
        sum += a[i];
        maxi = max(a[i],maxi);
    }
    int l = maxi,h = sum;
    while(l<=h){
        int mid = l +(h-l)/2;
        
        if(isValid(a,n,mid,k)==true){
            res = mid;
            h = mid-1;
        }else{
            l = mid+1;
        }
    }
    return res;
}

int main()
{
	int n;
	cin>>n;
	int k;
	cin>>k;
	vector<int> a(n);
	for(int i=0;i<n;i++)cin>>a[i];
	cout<<"Minimum Stress for K students: "<<allocatePages(a,n,k);
	return 0;
}

