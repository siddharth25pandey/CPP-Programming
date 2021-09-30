#include<iostream>
#include<stdlib.h>

using namespace std;

void min_heapify(int* a, int n, int node){

    int lc = (2*node) + 1;
    int rc = (2*node) + 2;

    int min = node;

    if (lc<n && a[lc]<a[node]){
        min = lc;
    }

    if (rc<n && a[rc]<a[min]){
        min = rc;
    }

    if (min!=node){

        int temp = a[node];
        a[node] = a[min];
        a[min] = temp;

        min_heapify(a, n, min);
    }

}

void build_heap(int* a, int n){
    for (int i=n/2; i>=0; i--){
        min_heapify(a, n, i);
    }
}

int extract_min(int* a, int n){
    int temp = a[0];
    a[0]=a[n-1];
    a[n-1]=temp;

    min_heapify(a, n-1, 0);

    return temp;
}

void print_array(int* a, int n){
    for (int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}

int main(void){

    int a[] = {7, 10, 4, 20, 15};

    int n = sizeof(a)/sizeof(int);

    build_heap(a, n);

    int k = 4;

    int ans;

    for (int i=0; i<k; i++){
        ans = extract_min(a, n-i);
    }

    cout<<"kth smallest element is "<<ans;

    return 0;
}
