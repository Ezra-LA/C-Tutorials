#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    printf("Greater no is: %d",a>b?a:b);
    getch();
}

// Program to compare two numbers by using ternary operators