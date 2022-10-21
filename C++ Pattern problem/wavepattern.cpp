#include <iostream>
using namespace std;

void wavepattern(int height, int length)
{
	int i, j, k, pp, n, count, x;
	pp = 2;
	x = 1;
	for (i = 0; i < height; i++) {

		for (j = height; j <= height + i; j++)
			cout << " ";	
		for (count = 1;count<=length;count++) 
        {
		 for (n = (height + height - 2); n >= x; n--)
				cout << " ";
                for (k = 1; k <= pp; k++) 
                {
                    if (k == 1)
                        cout << "/";
                    else if (k == pp)
                        cout << "\\";
                    else
                        cout << " ";
                }
		}
		x=x+2;
		pp=pp+2;
		cout<<endl;
	}
}
int main()
{
	int height ;
	int length ;
    cout<<"Enter height and length:";
   cin>>height;
   cin>>length;
	wavepattern(height,length);
	return 0;
}
