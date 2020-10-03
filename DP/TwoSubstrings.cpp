#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    string s;
    cin >> s;
    ll i,abp=0,bap=0,l=s.length(),k=0;
    for(i=0;i<l;i++){
        if(s.substr(i,3)=="ABA" || s.substr(i,3)=="BAB"){
            if(k==1){
                k=10;
                break;
            }
            k=1;
            i+=2;
        }
        else if(s.substr(i,2)=="AB" && abp==0){
            abp=1;
            i++;
        }
        else if(s.substr(i,2)=="BA" && bap==0){
            bap=1;
            i++;
        }
        if(abp && bap){
            k=10;
            break;
        }
        else if((abp==1 && k==1)||(bap==1 && k==1)){
            k=10;
            break;
        }
    }
    if(k==10)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
