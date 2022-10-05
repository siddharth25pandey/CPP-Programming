void shift(char* ptr)
{
ptr[strlen(ptr)+1]='\0';
for(int i=strlen(ptr);i>0;i--)
{
ptr[i]=ptr[i-1];
}
*ptr=' ';
}
// This is the function which splits the even length string with length>=4 in two equal half...
void breakWords(char* S)
{
for(int i=0;S[i]!='\0';i++)
{
int j=0;
if(i>0 && S[i-1]==' ')
{
j=i;
}
while(S[j]!=' ' && S[j]!='\0')
{
j++;
}
if((j-i)%2==0 && j-i>=4)
{
char* ptr=S;
shift(ptr+(i+j)/2);
i=j+1;
}
else if((j-i)%2!=0 || j-i<4)
{
i=j;
}
}
}

#include<iostream>
#include<string.h>
using namespace std;
// #include"solution.h"
int main()
{
	char str[100000];
	cin.getline(str,100000);
	breakWords(str);
	cout<<str;
}
