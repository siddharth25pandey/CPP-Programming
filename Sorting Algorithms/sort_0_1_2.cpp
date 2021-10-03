

#include <iostream>

using namespace std;

void sort_0_1_2(int a[], int n){
    int p,q,r; // this stores indexes of lower middle and higher
    p=0;
    q=0;
    r=n-1;
    while(q<=r){
        if (a[q]==0){
            swap(a[p],a[q]);
            q++;
            p++;
        }
        else if(a[q]==1){
            q++;
        }
        else{
            swap(a[q],a[r]);
            q++;
            r--;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort_0_1_2(a,n);
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }

    return 0;
}
