		
#include <bits/stdc++.h>
using namespace std;
 int findSum(string str)
    {
    	int sum=0,ans=0;
    	for(int i=0;i<str.size();i++){
    	    if(str[i]>='0' && str[i]<='9'){
    	        ans = ans*10 + (str[i]-'0');
    	    }
    	    else{
    	        sum += ans;
    	        ans = 0;
    	    }
    	}
    	return sum;
    }
int main()
{
    string s;
    cout<<"Use numbers"<<endl;
    cin>>s;
    std::cout << findSum(s) << std::endl;
    return 0;
}
