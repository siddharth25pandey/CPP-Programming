#include<iostream>

using namespace std;

double newtonRaphson(double n, double prec){
    double x = n;
    double root ;
    while(true){
        root = 0.5 * (x + (n/x));

        if(abs(root - x) < prec){
            break;
        }
        x = root;
    }
    return root;
}

int main(){
    double n = 46;
    double prec = 0.5;
    cout<<newtonRaphson(n,prec)<<endl;
}