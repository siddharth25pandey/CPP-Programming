#include <bits/stdc++.h>

using namespace std;


void add(int* a, int* b, int* c, int n, int x){
    int i,j, m=x>0?n/2:n;
    for (i=0;i<m;i++)
        for (j=0;j<m;j++)
            *(c+i*m+j) = *(a+i*n+j) + *(b+i*n+j);
}

void sub(int* a, int* b, int* c, int n, int x){
    int i,j, m=x>0?n/2:n;
    for (i=0;i<m;i++)
        for (j=0;j<m;j++)
            *(c+i*m+j) = *(a+i*n+j) - *(b+i*n+j);
}


void strassen(int* a, int* b, int*c, int n){
    if(n==2){
         int p=(*a+*(a+n+1))*(*b+*(b+n+1));
        int q=(*(a+n)+*(a+n+1))*(*b);
        int r=(*a)*(*(b+1)-*(b+n+1));
        int s=(*(a+n+1))*(*(b+n)-*b);
        int t=(*a+*(a+1))*(*(b+n+1));
        int u=(*(a+n)-*a)*(*b+*(b+1));
        int v=(*(a+1)-*(a+n+1))*(*(b+n)+*(b+n+1));
        *c=p+s-t+v;
        *(c+1)=r+t;
        *(c+n)=q+s;
        *(c+n+1)=p+r-q+u;
    }
    else{
         int m=n/2;
         int x[m][m];
         int y[m][m];
         int o[n][n];

        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                o[i][j]=0;

        int P[m][m];


        add(a, a+m*(n+1), *x , n, 1);
        add(b, b+m*(n+1), *y, n, 1);
        strassen(*x, *y, *P, m);

        int Q[m][m];
        add(a+m*n, a+m*(n+1), *x, n, 1);
        add(b, *o, *y, n, 1);
        strassen(*x, *y, *Q, m);

        int R[m][m];
        add(a, *o, *x, n, 1);
        sub(b+m, b+m*(n+1), *y, n, 1);
        strassen(*x, *y, *R, m);

        int S[m][m];
        add(a+m*(n+1), *o, *x, n, 1);
        sub(b+m*n, b, *y, n, 1);
        strassen(*x, *y, *S, m);


        int T[m][m];
        add(a, a+m, *x, n, 1);
        add(b+m*(n+1), *o, *y, n, 1);
        strassen(*x, *y, *T, m);


        int U[m][m];
        sub(a+m*n, a, *x, n, 1);
        add(b, b+m, *y, n, 1);
        strassen(*x, *y, *U, m);


        int V[m][m];
        sub(a+m, a+m*(n+1), *x, n, 1);
        add(b+m*n, b+m*(n+1), *y, n, 1);
        strassen(*x, *y, *V, m);



        int W[m][m], X[m][m], Y[m][m], Z[m][m];
        sub(*V,*T,*x,m,0);
        add(*S,*x,*y,m,0);
        add(*P,*y,*W,m,0);
        add(*R,*T,*X,m,0);
        add(*Q,*S,*Y,m,0);
        sub(*U,*Q,*x,m,0);
        add(*R,*x,*y,m,0);
        add(*P,*y,*Z,m,0);


        for (int i=0;i<m;i++)
            for (int j=0;j<m;j++){
                *(c+i*n+j) = W[i][j];
                *(c+i*n+j+m) = X[i][j];
                *(c+(i+m)*n+j) = Y[i][j];
                *(c+(i+m)*n+j+m) = Z[i][j];
            }
    }
    }
int main()
{
    int n;
    cout<<"enter the order of matrix\n";
    cin>>n;

   int a[n][n];
   int b[n][n];
  srand(time(0));
   for(int k=0;k<n;k++){
    for(int l=0;l<n;l++){
        a[k][l]=rand()%100;
        b[k][l]=rand()%100;
    }
   }
    cout<<"The first matrix is \n";
    for(int k=0;k<n;k++){
    for(int l=0;l<n;l++){
        cout<<a[k][l]<<" ";
    }
    cout<<"\n";
   }
    cout<<"\n";
    cout<<"The second matrix is \n";

   for(int k=0;k<n;k++){
    for(int l=0;l<n;l++){
        cout<<b[k][l]<<" ";
    }
    cout<<"\n";
   }

 cout<<"\n";
  int c[n][n];
  strassen(*a,*b,*c,n);
   cout<<"The product of matrix is \n";
   for(int k=0;k<n;k++){
    for(int l=0;l<n;l++){
        cout<<c[k][l]<<" ";
    }
    cout<<"\n";
   }



}
