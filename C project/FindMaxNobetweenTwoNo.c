#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,*p,*q;
    p = &a;
    q = &b;

    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);

    if(*p>*q)
        printf("Greater number is %d",*p);
    else
        if(*p==*q)
        printf("Both are equal");
        else
        printf("Greater number is %d",*q);
    getch();
}

// Program to find maximum number between two numbers using pointers