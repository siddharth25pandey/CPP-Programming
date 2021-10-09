#include <iostream>
#include <unistd.h>
using namespace std;
#include<iostream>    
using namespace std;      
void printFibonacci(int n){
     cout<<"0 "<<"1 ";     
    static int n1=0, n2=1, n3;    
    if(n>0){    
         n3 = n1 + n2;    
         n1 = n2;    
         n2 = n3;    
 cout<<n3<<" ";    
         printFibonacci(n-1);    
    }    
}    
int main(){    
    int n;    
   srand((unsigned) getpid());
   int n = 2+rand()% 9;

   
    cout<<"Fibonacci Series: ";    
    
    printFibonacci(n);  //n-2 because 2 numbers are already printed    
     return 0;  
}  