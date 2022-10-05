#include <iostream>
#include<string>
using namespace std;

bool isPalindrome(string &str,int start,int end)
{
    if(start >= end) //base case
    	return true;
        //if mismatch happens false will be returned else true
    return ((str[start] == str[end]) && isPalindrome(str,start+1,end-1));

}

int main()
{
    string str;
    cin>>str;
    int length = str.length();
    bool ans = isPalindrome(str,0,length-1);
    if(ans == true)
    	cout<<"Yes"<<endl;
    else
    	cout<<"No"<<endl;
    return 0;
}
