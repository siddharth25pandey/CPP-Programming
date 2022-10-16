#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

vector<string>ans;

void generate(string s,int open,int close){
    if (open==0 && close==0)
    {
        ans.push_back(s);
        return;
    }
    if (open>0)
    {
        s.push_back('(');
        generate(s,open-1,close);
        s.pop_back();
    }
    if (close>0 && close>open)
    {
        s.push_back(')');
        generate(s,open,close-1);
        s.pop_back();
    }
}

vector<string> generateParenthesis(int n) {
        generate("",n,n);
        return ans;
}

int main()
{
    int n;
    cin>>n;
    vector<string>ans=generateParenthesis(n);
    for(auto &it:ans){
        cout<<it<<" ";
    }
    return 0;
}
