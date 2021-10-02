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
