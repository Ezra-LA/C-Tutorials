#include<stdio.h>
#include<conio.h>

int fact(int);
void main()
{
    int x,z;
    printf("Enter a number:");
    scanf("%d",&x);
    z = fact(x);
    printf("Factorial is %d",z);
    getch();
}

int fact(int n)
{
    int ft = 1;
    if(n==1)
    return(n);
    ft = n*fact(n-1);
    return(ft);
}

// Program to find factorial of a number using recursion