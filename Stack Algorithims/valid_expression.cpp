#include<bits/stdc++.h>
using namespace std;
bool valid(string str);
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<valid(str)<<endl;
    }
    return 0;
}// } Driver Code Ends


bool valid(string s)
{
    // code here
    stack<int>st;
    unordered_map<char,int>m={{'{',-1},{'[',-2},{'(',-3},{'}',1},{']',2},{')',3}};
    for(int i=0;i<s.size();i++)
    {
        if(m[s[i]]<0)
        {
            st.push(s[i]);
        }
        else 
        {
            if(st.empty())
            {
                return false;
            }
            else 
            {   char x=st.top();
            st.pop();
                if(m[x]+m[s[i]]>1)
                {
                    return false;
                }
            }
            
        }
    }
    if(st.empty())
    {
        return true;
    }
    return false;
}