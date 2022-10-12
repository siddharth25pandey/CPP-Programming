#include <iostream>
using namespace std;

int facto(int n){
    int fact = 1;
    
    for(int i = 1; i <= n; i++)
            fact = fact * i;
    
    return fact;
}

int detectStrong(int num){
    
    int digit, sum = 0;
    int temp = num;
    
 
    while(temp!=0){
        digit = temp % 10;
        
        sum = sum + facto(digit);
        temp /= 10;
    }
    
    return sum == num;
    
}
int main ()
{
    int num = 145;
    
    if(detectStrong(num))
        cout << num << " is Strong Number";
    else
        cout << num << " is Not Strong Number";

}