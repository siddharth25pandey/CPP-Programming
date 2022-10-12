// This code is contributed by CoderGhost37

#include <iostream>
#include <string.h>
using namespace std;

int hexadecimalToDecimal(string n)
{
    int ans = 0, x=1;
    int s = n.size();

    for(int i=s-1; i>=0; i--)
    {
        if(n[i] >= '0'  &&  n[i] <= '9')
        {
            ans += x*(n[i] - '0');
        }
        else if(n[i] >= 'A'  &&  n[i] <= 'F')
        {
            ans += x*(n[i] - 'A' + 10);
        }
        x *= 16;
    }

    return ans;
}

int decimalToBinary(int n)
{
    int ans = 0;
    int x = 1;
    while(x <= n)
    {
        x *=2;
    }
    x /=2;               // since, while loop will make the value of x 2times more than that required
    
    while(x>0)
    {
        int lastDigit = n/x;
        n -=lastDigit*x; 
        x /= 2;
        ans = ans*10 + lastDigit;
    }
    return ans;
}

int binaryToDecimal(int n)
{
    int ans = 0, x = 1;
    while(n>0)
    {
        int lastDigit = n%10;
        ans += lastDigit*x;
        x *=2;
        n = n/10;
    }

    return ans;
}

string decimalToHexadecimal(int n)
{
    int x=1;
    string ans = "";

    while(x <= n)
    {
        x *= 16;
    }
    x /= 16;

    while(x>0)
    {
        int lastDigit = n/x;
        n -= lastDigit*x;
        x /= 16;

        if (lastDigit <= 9){
            ans = ans + to_string(lastDigit);
        } 
        else{
            char c = 'A' + lastDigit -10;
            ans.push_back(c);
        }
    }
    return ans;
}

int main()
{
    cout<< decimalToBinary(7) <<endl;  // decimal to binary converion
    cout<< binaryToDecimal(1101) <<endl; // binary to decimal conversion
    cout<< decimalToHexadecimal(127) <<endl; // decimal to hexadecimal conversion
    cout<< hexadecimalToDecimal("421") <<endl; // hexadecimal to decimal conversion

    return 0;
}
