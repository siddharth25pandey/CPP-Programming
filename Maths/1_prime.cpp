#include<iostream>
#include<math.h>

using namespace std;

bool isPrime(int n){
    int c = 2;
    while(c*c <= sqrt(n)){
        if(n%c == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    if(isPrime(n)){
        cout << "Prime" << endl;
    }
    else{
        cout<<"Composite" << endl;
    }
}