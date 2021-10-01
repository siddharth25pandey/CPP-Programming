#include<bits/stdc++.h>
using namespace std; 
  
class Two_Stacks 
{ 
    int *arr; 
    int t, m, n;; 
     
public: 
   Two_Stacks(int num)
   { 
       t=num; 
       arr=new int[num]; 
       m=-1; 
       n=t; 
   } 
  
   
   void push1(int x) 
   { 
       
       if(m<(n - 1)) 
       { 
           m++; 
           arr[m]=x; 
       } 
       else
       { 
           cout<<"Stack Overflow"<<endl; 
           exit(1); 
       } 
   } 
  
   void push2(int x) 
   {       
       if(m<(n - 1)) 
       { 
           n--; 
           arr[n]=x; 
       } 
       else
       { 
           cout<<"Stack Overflow"<<endl; 
           exit(1); 
       } 
   } 
   
   int pop1() 
   { 
       if (m>=0) 
       { 
          int temp=arr[m]; 
          m--; 
          return temp; 
       } 
       else
       { 
           cout<<"Stack UnderFlow"<<endl; 
           exit(1); 
       } 
   } 
  
   int pop2() 
   { 
       if(n<t) 
       { 
          int x=arr[n]; 
          n++; 
          return x; 
       } 
       else
       { 
           cout<<"Stack UnderFlow"<<endl; 
           exit(1); 
       } 
   } 
}; 
  
int main() 
{ 
    Two_Stacks obj(8); 
    obj.push1(5); 
    obj.push2(10); 
    obj.push1(15); 
    obj.push2(20); 
    obj.push2(25); 
    obj.push1(30);
    obj.push1(35); 
    cout<<"Element popped from stack1 is "<<obj.pop1()<<endl; 
    obj.push2(50); 
    cout<<"Element popped from stack2 is "<<obj.pop2()<<endl; 
    obj.push1(55);
    cout<<"Element popped from stack1 is "<<obj.pop1()<<endl;

    return 0; 
}