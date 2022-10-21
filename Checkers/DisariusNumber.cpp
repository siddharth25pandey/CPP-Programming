#include <bits/stdc++.h>
using namespace std;
int calculateLength(int n){  
    int length = 0;  
    while(n != 0){  
        length = length + 1;  
        n = n/10;  
    }  
    return length;  
}  
   
int main()  
{  
    int num = 175, sum = 0, rem = 0, n;  
    int len = calculateLength(num);  
    n = num;  
    while(num > 0){  
        rem = num%10;  
        sum = sum + (int)pow(rem,len);  
        num = num/10;  
        len--;  
    }  
       
    if(sum == n)  
        printf("%d is a disarium number", n);  
    else  
        printf("%d is not a disarium number", n);  
   
    return 0;  
}  