#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter a number: ";
  cin>>n;
  
  if(n & (n-1)){
    cout<<" Not a power of 2";
  }
  else{
    cout<<" Power of 2";
  }
  
  return 0;
}
