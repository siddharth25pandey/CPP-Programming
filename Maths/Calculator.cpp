#include <iostream>
#include <cmath>
#include <math.h>
#include<cstring>
using namespace std;

int mem = -1;

void add()
{
    cout << "Operation to be performed is addition\n";
    int a, b, result;
    cout << "Enter the first parameter\n";
    cin >> a;
    cout << "Enter the second parameter\n";
    cin >> b;
    result = a + b;
    cout << "The addition of " << a << " and " << b << " is " << result << endl;
    return;
}

void sub()
{
    cout << "Operation to be performed is subtraction\n";
    int a, b, result;
    cout << "Enter the first parameter\n";
    cin >> a;
    cout << "Enter the second parameter\n";
    cin >> b;
    result = a - b;
    cout << "The subtraction of " << a << " and " << b << " is " << result << endl;
    return;
}

void mult()
{
    cout << "Operation to be performed is multiplication\n";
    int a, b, result;
    cout << "Enter the first parameter\n";
    cin >> a;
    cout << "Enter the second parameter\n";
    cin >> b;
    result = a * b;
    cout << "The multiplication of " << a << " and " << b << " is " << result << endl;
    return;
}

void div()
{
    cout << "Operation to be performed is to find the quotient\n";
    int a, b;
    double result;
    cout << "Enter the first parameter\n";
    cin >> a;
    cout << "Enter the second parameter\n";
    cin >> b;
    result = a / b;
    cout << "The Quotient when " << a << " is divided by " << b << " is " << result << endl;
    return;
}

void remainder()
{
    cout << "Operation to be performed is to find the remainder\n";
    int a, b, result;
    cout << "Enter the first parameter\n";
    cin >> a;
    cout << "Enter the second parameter\n";
    cin >> b;
    result = a % b;
    cout << "The remainder when " << a << " is divided by " << b << " is " << result << endl;
    return;
}

void square()
{
    cout << "Operation to be performed is to find the square\n";
    int a, result;
    cout << "Enter the parameter\n";
    cin >> a;
    result = a * a;
    cout << "The square of " << a << " is " << result << endl;
    return;
}

void square_root()
{
    cout << "Operation to be performed is to find the square root\n";
    int a;
    double result;
    cout << "Enter the parameter\n";
    cin >> a;
    result = sqrt(a);
    cout << "The square root of " << a << " is " << result << endl;
    return;
}

void cube()
{
    cout << "Operation to be performed is to find the cube\n";
    int a, result;
    cout << "Enter the parameter\n";
    cin >> a;
    result = a * a * a;
    cout << "The cube of " << a << " is " << result << endl;
    return;
}

void cube_root()
{
    cout << "Operation to be performed is to find the cube root\n";
    int a;
    double result;
    cout << "Enter the parameter\n";
    cin >> a;
    result = cbrt(a);
    cout << "The cube root of " << a << " is " << result << endl;
    return;
}

void setmem()
{
    cout << "Operation to be performed is to set memory\n";
    cout << "Enter the number to be stored in memory";
    cin >> mem;
    cout << "The mem is " << mem << endl;
}

void printmem()
{
    cout << "Operation to be performed is to print memory\n";
    cout << "The mem is " << mem << endl;
}

void find_sin()
{
    int a, choice;
    double result;
    cout << "Enter 1 to give input in radians , 2 to give input in degrees\n";
    cin >> choice;
    cout << "Enter the parameter\n";
    cin >> a;
    if (choice == 1)
        result = sin(a);
    else
        result = sin(a * (3.14159 / 180));
    cout << "sin(x) = " << result << endl;
}

void find_cos()
{
    int a, choice;
    double result;
    cout << "Enter 1 to give input in radians , 2 to give input in degrees\n";
    cin >> choice;
    cout << "Enter the parameter\n";
    cin >> a;
    if (choice == 1)
        result = cos(a);
    else
        result = cos(a * (3.14159 / 180));
    cout << "cos(x) = " << result << endl;
}

void find_tan()
{
    int a, choice;
    double result;
    cout << "Enter 1 to give input in radians , 2 to give input in degrees\n";
    cin >> choice;
    cout << "Enter the parameter\n";
    cin >> a;
    if (choice == 1)
        result = tan(a);
    else
        result = tan(a * (3.14159 / 180));
    cout << "tan(x) = " << result << endl;
}

void find_ln()
{
    int a;
    double result;
    cout << "Enter the parameter\n";
    cin >> a;
    result = log(a);
    cout << "ln(x) = " << result << endl;
}

void find_log()
{
    int a, b;
    double result;
    cout << "Enter the base\n";
    cin >> b;
    cout << "Enter the paramter\n";
    cin >> a;
    result = log(a) / log(b);
    cout << "log(x) = " << result << endl;
}

void power()
{
    int a, b;
    double result;
    cout << "Enter the base\n";
    cin >> a;
    cout << "Enter the exponent\n";
    cin >> b;
    result = pow(a, b);
    cout << "The result is " << result << endl;
}

void normal_mode()
{
    int input;
    do
    {
        cout << "\nEnter an operation to perform\nMenu\n1.Addition\n2.Substraction\n3.Multiplication\n4.Find Quotient\n5.Find remainder\n6.Square\n7.Square Root\n8.Cube\n9.Cube root\n10.Set memory\n11.Print memory\n0.To exit\n";
        cin >> input;
        if (input == 1)
            add();
        if (input == 2)
            sub();
        if (input == 3)
            mult();
        if (input == 4)
            div();
        if (input == 5)
            remainder();
        if (input == 6)
            square();
        if (input == 7)
            square_root();
        if (input == 8)
            cube();
        if (input == 9)
            cube_root();
        if (input == 10)
            setmem();
        if (input == 11)
            printmem();
    } while (input != 0);
    return;
}

void scientific_mode()
{
    int input;
    do
    {
        cout << "\nEnter an operation to perform\nMenu\n1.Addition\n2.Substraction\n3.Multiplication\n4.Find Quotient\n5.Find remainder\n6.Square\n7.Square Root\n8.Cube\n9.Cube root\n10.Set memory\n11.Print memory\n12.sin\n13.cos\n14.tan\n15.ln\n16.log\n17.exp\n0.To exit\n";
        cin >> input;
        if (input == 1)
            add();
        if (input == 2)
            sub();
        if (input == 3)
            mult();
        if (input == 4)
            div();
        if (input == 5)
            remainder();
        if (input == 6)
            square();
        if (input == 7)
            square_root();
        if (input == 8)
            cube();
        if (input == 9)
            cube_root();
        if (input == 10)
            setmem();
        if (input == 11)
            printmem();
        if (input == 12)
            find_sin();
        if (input == 13)
            find_cos();
        if (input == 14)
            find_tan();
        if (input == 15)
            find_ln();
        if (input == 16)
            find_log();
        if (input == 17)
            power();
    } while (input != 0);
    return;
}

void Dec_Bin()
{
    int num;
    int out[100010];
    int count = 0;
    printf("Enter parameter\n");
    cin >> num;
    for (int i = 0; num != 0; i++)
    {
        out[i] = num % 2;
        num = num / 2;
        count++;
    }
    cout << "The decimal number given in binary is :";
    for (int i = count - 1; i >= 0; i--)
        cout << out[i];
    cout << endl;
}

void Bin_Dec()
{
    int sum = 0;
    int num;
    printf("Enter the binary number\n");
    cin >> num;
    int base = 1;
    while (num)
    {
        int lastdigit = num % 10;
        num = num / 10;
        sum = sum + lastdigit * base;
        base = base * 2;
    }
    cout << "The Binary number given in decimal is :";
    cout << sum << endl;
}

void Dec_Oct()
{
    int num;
    int out[100010];
    int count = 0;
    printf("Enter parameter\n");
    cin >> num;
    for (int i = 0; num != 0; i++)
    {
        out[i] = num % 8;
        num = num / 8;
        count++;
    }
    cout << "The decimal number given in octal is :";
    for (int i = count - 1; i >= 0; i--)
        cout << out[i];
    cout << endl;
}

void Oct_Dec()
{
    int sum = 0;
    int num;
    printf("Enter the octal number\n");
    cin >> num;
    int base = 0;
    while (num)
    {
        int lastdigit = num % 10;
        num = num / 10;
        sum = sum + lastdigit * pow(8, base);
        base++;
    }
    cout << "The octal number given in decimal is :";
    cout << sum << endl;
}

void Dec_Hex()
{
    int num;
    char out[100010];
    int count = 0;
    printf("Enter parameter\n");
    cin >> num;
    int temp;
    for (int i = 0; num != 0; i++)
    {
        temp = num % 16;
        if (temp < 10)
            out[i] = temp + 48;
        else
            out[i] = temp + 55;
        num = num / 16;
        count++;
    }
    cout << "The decimal number given in hexa is :";
    for (int i = count - 1; i >= 0; i--)
        cout << out[i];
    cout << endl;
}

void Hex_Dec()
{
    char num[20];
    int i, r, len, hex = 0;
    printf("Enter the hexa decimal number\n");
    cin >> num;
    len = strlen(num);
    int base = 0;
    for (i = 0; num[i] != '\0'; i++)
    {
        len--;
        if (num[i] >= '0' && num[i] <= '9')
            r = num[i] - 48;
        else if (num[i] >= 'a' && num[i] <= 'f')
            r = num[i] - 87;
        else if (num[i] >= 'A' && num[i] <= 'F')
            r = num[i] - 55;
        hex += r * pow(16, len);
    }
    cout << "The hexa decimal number given in decimal is :";
    cout << hex << endl;
}

void programmer_mode()
{
    int input;
    do
    {
        cout << "\nEnter an operation to perform\nMenu\n1.To convert Decimal to Binary\n2.To convert Binary to Decimal\n3.To convert Decimal to octal\n4.To convert Octal to Decimal\n5.To convert Decimal to Hexa\n6.To convert Hexa to Decimal\n0.To exit\n";
        cin >> input;
        if (input == 1)
            Dec_Bin();
        if (input == 2)
            Bin_Dec();
        if (input == 3)
            Dec_Oct();
        if (input == 4)
            Oct_Dec();
        if (input == 5)
            Dec_Hex();
        if (input == 6)
            Hex_Dec();
    } while (input != 0);
    return;
}

int main()
{
    int mode;
    char ch;
    cout << "Welcome to Terminal Calculator\nThere are three modes , Enter\n1.For normal mode\n2.For scientific mode\n3.For programmer mode\n";
    cin >> mode;
    if (mode == 1)
    {
        normal_mode();
    }
    if (mode == 2)
    {
        scientific_mode();
    }
    if (mode == 3)
    {
        programmer_mode();
    }
    return 0;
}