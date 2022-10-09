#include<bits/stdc++.h>
using namespace std;

void rotatebyk(int k,int n, int arr[]){
k=k%n;

// reverse(nums.begin(),nums.end());
//         reverse(nums.begin(),nums.begin()+k);
//         reverse(nums.begin()+k,nums.end());
for(int i=0;i<n;i++){
    if(i<k){
        cout << arr[n + i - k] << " ";
    }
    else{
        cout<< arr[i-k]<<" ";
    }

}
cout<<endl;
}

int main(){
    int n,k;
    cin>>n;
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    rotatebyk(k,n,arr);
}
