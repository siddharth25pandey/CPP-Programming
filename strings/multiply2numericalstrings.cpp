/*Answer is to be displayed in string itself*/
#include <bits/stdc++.h>
  using namespace std;
  string add(string a,string b){
    int i,k=a.length()<b.length()?a.length():b.length(),c=0;
    string res;
    for(i=0;i<k;i++){
      res.push_back(((a[i]-'0')+(b[i]-'0')+c)%10 + '0');
      c=((a[i]-'0')+(b[i]-'0')+c)/10;
    }
    if(a.length()>b.length()){
      for(i=k;i<a.length();i++){
        res.push_back((((a[i]-'0'))+c)%10 + '0');
        c=((a[i]-'0')+c)/10;
      }
      if(c!=0)
      res.push_back('1');
    }
    else{
      for(i=k;i<b.length();i++){
        res.push_back((((b[i]-'0'))+c)%10 + '0');
        c=((b[i]-'0')+c)/10;
      }
      if(c!=0)
      res.push_back('1');
    }
    return res;
  }
  int main()
  {
    //write your code here
    int t,i,c,j;
    cin>>t;
    while(t--){
      string a,b,f;
      cin>>a>>b;
      reverse(a.begin(),a.end());
      reverse(b.begin(),b.end());
      int k=a.length()<b.length()?a.length():b.length();
      c=0;
      string r[b.length()];
      for(j=0;j<b.length();j++)
      {
        c=0;
      for(i=0;i<a.length();i++){
        r[j].push_back(((a[i]-'0')*(b[j]-'0')+c)%10 + '0');
        c=((a[i]-'0')*(b[j]-'0')+c)/10;
      }
      if(c!=0)
      r[j].push_back(c+'0');
      }
      f=r[0];
      for(i=1;i<b.length();i++){
        j=i;
        while(j--){
          r[i]= '0'+r[i];
        }
        f=add(f,r[i]);
      }
      reverse(f.begin(),f.end());
      cout<<f<<endl;
    }
    return 0;
  }