// LCM of two numbers a and b is equal to (a*b)/gcd(a,b);

#include <iostream>
#include <algorithm>

using namespace std;

int lcm(int a, int b){
    return a * b/(__gcd(a,b));
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<lcm(a,b)<<endl;
    
}