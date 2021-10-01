// Used to print all primes smaller than or equal to n.

#include <iostream>

using namespace std;

void seive(int n){
    bool primes[n+1];
    for(int i = 2; i*i <= n;i++){
        if(!primes[i]){
            for(int j = i*2 ; j <= n; j+=i){
                primes[j] = true;
            }
        }
    }
    for(int i = 2; i <= n; i++){
        if(!primes[i]){
            cout<<i<<endl;
        }
    }
}

int main(){
    int n;
    cin>>n;
    seive(n);
}


// Time complexity of this algorithm is O(n*log(logn)).

// We are looking at N/2 + N/3 + N/5 + N/7 + .........N/P   p<=sqrt(n).   