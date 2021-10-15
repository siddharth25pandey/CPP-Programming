#include <bits/stdc++.h>
using namespace std;


int main() 
{
    stack<int> s1,s2;
    int n,t,val;
    
        cin>>n;
        if(n==1)
        { 
            cin>>val;
            s1.push(val);
            if(s2.empty())
            s2.push(val);
            else 
            {
                if(val>s2.top())
                s2.push(val);
                else 
                s2.push(s2.top());
            }
        }
        else if(n==2)
        {
            s1.pop();
            s2.pop();
        }
        else if(n==3)
        {
            cout<<s2.top()<<endl;
        }
        
    return 0;
}