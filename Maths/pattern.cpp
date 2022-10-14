#include <bits/stdc++.h>

using namespace std;

int main(){
// cout<<"Enter the number you want to print pattern for"<<endl;
int n,i;
i =1;
int start;
n=12;
int j,stars;
while(i<=n){
    j =1;
    while(j<=n-i+1){
        cout<<j;
        j++;
    }
    stars = 1;
    while(stars<=2*i-2){
        cout<<'*';
        stars++;
    }
    j=1;
    start = n-i+1;
    while(j<=n-i+1){
        cout<<start;
        start--;
        j++;
    }
    cout<<endl;
    i++;
}
return 0;

}