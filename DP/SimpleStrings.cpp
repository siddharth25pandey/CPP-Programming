#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string check(string s){
    ll i,l,flag=0;
    l=s.length();
    for(i=1;i<l-1;i++){
        if(s[i]==s[i-1] && s[i]==s[i+1] && s[i]!='z'){
            s[i]++;
            flag=1;
        }
        else if(s[i]==s[i-1] && s[i]==s[i+1] && s[i]=='z'){
            s[i]='a';
            flag=1;
        }
        else if(s[i]==s[i-1] && s[i]!=s[i+1]){
            s[i-1]=s[i+1];
            flag=1;
        }
    }
    if(s[l-1]==s[l-2] && s[l-1]=='z'){
        s[l-1]='a';
        flag=1;
    }
    else if(s[l-1]==s[l-2] && s[l-1]!='z'){
        s[i]='z';
        flag=1;
    }
    if(flag)
        s=check(s);
    return s;
}
int main(){
    string s;
    cin >> s;
    ll i,l=s.length();
    for(i=1;i<l;i++){
        if(s[i]==s[i-1]){
            if(s[i]=='z')
                s[i]='a';
            else
                s[i]++;
            if(s[i+1]==s[i]){
                if(s[i]=='z')
                    s[i]='a';
                else
                    s[i]++;
            }
        }
    }
    cout << s << endl;
    return 0;
}
