#include <bits/stdc++.h>
#include<string.h>
using namespace std;
#define INF INT_MAX

int printSolution (int p[], int n);

void printArray(int arr[20][20])
{
	int n;
	for(int i=0;i<n;i++)
	{	for(int j=0;j<n;j++)
		{	cout<<arr[i][j]<<"     ";		
		}cout<<endl;
	}
}

void solveWordWrap (int l[], int n, int M)
{
	int extras[n+1][n+1]={0,0};

	int lc[n+1][n+1]={0,0};
	int c[n+1];
	int p[n+1];

	int i, j;
	for (i = 1; i <= n; i++)
	{
		extras[i][i] = M - l[i-1];
		for (j = i+1; j <= n; j++)
			extras[i][j] = extras[i][j-1] - l[j-1] - 1;
	}
	cout<<"######### ARRAY OF EXTRA SPACES #######";
		for(int i=1;i<=n;i++){
		cout<<"\n";
		for(int j=1;j<=n;j++){
			cout<<extras[i][j]<<"\t";
		}
	
	}
	cout<<"\n";
	
	for (i = 1; i <= n; i++)
	{
		for (j = i; j <= n; j++)
		{
			if (extras[i][j] < 0)
				lc[i][j] = INF;
			else if (j == n && extras[i][j] >= 0)
				lc[i][j] = 0;
			else
				lc[i][j] = extras[i][j]*extras[i][j];
		}
		
	}
cout<<"#################### Array OF COST ############################";
		for(int i=1;i<=n;i++){
		cout<<"\n";
		for(int j=1;j<=n;j++){
			if(lc[i][j]== INF ){
				lc[i][j]= 999;
				cout<<lc[i][j]<<"\t";
			}
			else
			cout<<lc[i][j]<<"\t";
		}
	
	}
	cout<<"\n";
	
	c[0] = 0;
	for (j = 1; j <= n; j++)
	{
		c[j] = INF;
		for (i = 1; i <= j; i++)
		{
			if (c[i-1] != INF && lc[i][j] != INF &&
						(c[i-1] + lc[i][j] < c[j]))
			{
				c[j] = c[i-1] + lc[i][j];
				p[j] = i;
			}
	
		}

	}
	
	cout<<"############################# Array OF FINAL COST  ##########################"<<"\n";
		for(int i=1;i<=n;i++){
		
		
			cout<<c[i]<<"\t";
		}
	
	
	cout<<"\n\n";
	
	printSolution(p, n);
	
	cout<<"\n cost of word wrapping is "<<c[n]<<endl;
	if (c[n]==999){
		cout<<"Word entered exceed the length of line"<<endl;
	}
}



int printSolution (int p[], int n)
{
	int k;
	if (p[n] == 1)
		k = 1;
	else
		k = printSolution (p, p[n]-1) + 1;
	cout<<"Line number "<<k<<": From word no. "<<p[n]<<" to "<<n<<endl;
	return k;
}



int main()
{
	string s[20];
	int n;
	int l[20];
	cout<<"enter the number of strings to input"<<endl;
	cin>>n;
	cout<<"enter the strings"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
	}
	for(int i=0;i<n;i++)
	{
		l[i]= s[i].length();
	}
	int M ;
    cout<<"Enter the length of sentence"<<endl;
    cin>>M;
	int n1 = sizeof(l)/sizeof(l[0]);
	solveWordWrap (l, n, M);
	return 0;
}


