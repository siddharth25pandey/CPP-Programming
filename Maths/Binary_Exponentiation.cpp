#include<iostream>
using namespace std;

int binExpItr(int a, int b){
  int ans = 1;
  
  while(b){
    if(b & 1){
      ans = ans * a * 1LL;
    }
    
    a = a * a * 1LL ;
    b = b >> 1;
  }
  
  return ans;
}

int main(){
  int a,b;
  
  cout<<"Enter the number and its power: ";
  cin>>a>>b;
  
  int finalAns = binExpItr(a,b);
  cout<< a << " to the power " << b << " = " << finalAns;

    return 0;
}
