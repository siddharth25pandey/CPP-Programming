/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
// #include<array>
using namespace std;
void initArray(int array[],int size){
    cout<<"enter values of array"<<endl;
    for(int i=0;i<size;i++)
    cin>>array[i];
}
void reverseArray(int array[],int start,int end){
    // int start=array[0];
    // int end=array[size];
    while(start<end){
        int temp=array[start];
        array[start]=array[end];
        array[end]=temp;
        start++;
        end--;
    }
}
void displayArray(int array[],int size){
    cout<<"[ ";
    for (int i=0;i<size;i++){
    cout<<array[i];
    if(i<size-1)
    cout<<" , ";
    
    }
    cout<<"]"<<endl;
}
int main()
{int size;

    cout<<"enter size of array"<<endl;
    cin>>size;
    int array[size];
    
    initArray(array,size);
    displayArray(array,size);
    reverseArray(array,0,size-1);
    displayArray(array,size);
    

    return 0;
}
