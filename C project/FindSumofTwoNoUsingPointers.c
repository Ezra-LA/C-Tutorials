#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,c,*p,*q;
    p = &a;
    q =&b;

    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);

    c = *p +*q;
    printf("Sum is %d",c);
}

// Program to calculate sum of two numbers usin pointers