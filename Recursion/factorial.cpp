// find factorial of a number c++ code
#include<iostream>
using namespace std;

// recursive function used  to find the factorial
int findFactorial(int num){
    // base condition
    if(num==0 || num==1){
        return 1;
    }
    // here function is calling itself recursively till until it hits the base condition
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

// Time Complexity of this code ->
// O(n) -- (where n is the number) as we are using recursion and the function call will
// happen until n hits the base condition so that many times function will get called
// and its body will get executed.

// Space Complexity of this code ->
// O(n) -- As here the amount of memory required for code execution is proportional to 
// how many times the function is getting recursively called i.e., till n>0 so its taking
// a constant space for every function call.
