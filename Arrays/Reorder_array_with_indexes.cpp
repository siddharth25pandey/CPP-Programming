#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> sortAWithB(vector<int>& A, vector<int>& B){
	int i,temp,c;
	int n = B.size();
	for(int i=0;i<n/2;i++){
		temp = B[i];
		c = A[i];
		A[i] = A[temp];
		A[temp] = c;
	}
	return A;
}

int main(){
    vector<int> A = {24,56,74,-23,87,91};
    vector<int> B = {1,2,3,0,4,5};
    
    vector<int> N = sortAWithB(A,B);
    for(auto &it:N){
    	cout<<it<<" ";
    }
    return 0;
}
