// find factorial of a number c++ code
#include<iostream>
using namespace std;

// recursive function used  to find the factorial
int findFactorial(int num){
    // base condition
    if(num==0 || num==1){
        return 1;
    }
    // here function is calling itself recursively till it is meeting the base condition
    // and multiplying the num with its previous function call returned value
    return num * findFactorial(num-1);
}

int main(){
    int number;
    cin>>number;
    
    // calling function and displaying the result
    cout<<"The factorial of "<<number<<" is "<<findFactorial(number);
    return 0;
}
