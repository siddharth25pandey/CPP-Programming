// Extended euclid algorithm is used to find the solution of ax + by = gcd(a,b).

#include<iostream>

using namespace std;


int gcdExtended(int *x,int *y,int a,int b){
    if(a==0){
        *x = 0;
        *y = 1;
        return b;
    }

    int x1,y1;
    int gcd = gcdExtended(&x1,&y1,b%a,a);
    *x = y1 - (b/a) * x1;
    *y = x1;

    return gcd;
}

int main(){
    int x,y, a= 35, b=15;
    int g = gcdExtended(&x,&y,a,b);
    cout << "GCD(" << a << ", " << b << ") = " << g << endl;
    cout<< "x :- "<<x<<" \ny :- "<<y<<endl;
    return 0;
}