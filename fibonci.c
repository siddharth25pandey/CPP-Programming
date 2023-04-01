//PROGRAM TO FIND FIBONACCI AND FACTORIAL WITH RECURSION IN C

#include<stdio.h>
#include<stdlib.h>
int fact();
int fibo();
int a=0, b=1, s;

//MAIN FUNCTION

void main()
{
    while (1)
    {
        int opt, n, facti, a=0, b=1, s;
    printf("\n1. Factorial\n");
    printf("2. Fibonacci\n");
    printf("3. Exit\n");
    printf("Enter Your Choice\n");
    scanf("%d", &opt);
    switch (opt)
    {
        case 1:                        //CASE 1 TO FIND THE FACTORIAL OF A NUMBER
        printf("Enter the no.: ");
        scanf("%d", &n);
        if (n<0)
        {
            printf("Factorial of %d Not Possible!", n);
        }
        else
        {
            facti=fact(n);
            printf("Factorial is %d\n",facti);
        }
        break;
        case 2:                         //CASE 2 TO FIND THE FIBONACCI SERIES
        printf("Enter the no. terms you want: ");
        scanf("%d", &n);
        if (n>0)
        {
            if (n==1)
        {
            printf("0 ");
        }
        else if (n==2)
        {
            printf("0 ");
            printf("1 ");
        }
        else
        {
            printf("0 ");
            printf("1 ");
            n=n-2;
            fibo(n);
        }
        }
        else
        {
            printf("Enter a Valid No. of Terms!\n");
        }
        break;
        case 3:
        exit(0);
        default:
        printf("Invalid Option!\n");
    }
    }
}


//FUNCTION TO FIND FACTORIAL

int fact(int n)
{
    if (n==1 || n==0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);    //FUNCTION CALLING ITSELF
    }
}


//FUNCTION TO FIND FIBONACCI SERIES

int fibo(int n)
{
    while (n>0)
    {
        s=a+b;
        printf("%d ", s);
        a=b;
        b=s;
        return fibo(n-1);      //FUNCTION CALLING ITSELF
    }

}