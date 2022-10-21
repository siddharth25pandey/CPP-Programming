#include<iostream>
using namespace std;

//Main Function
int main() {


    //For Animation
    while(1) {

        for(int i=1;i<=5;i++) {

            cout<<"\t\t\t\t\t\t\t";

            for(int j=1;j<=5-i;j++) {
                cout<<" ";
            }

            for(int j=1;j<=(2*i-1);j++) {
                cout<<"*";
            }
        
            cout<<"\n";

            _sleep(100);

        }

    }

   return 0;
}

// This pattern will be in Animation.
/*


                                                        *
                                                       ***
                                                      *****
                                                     *******
                                                    *********


*/
