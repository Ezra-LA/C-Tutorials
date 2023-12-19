#include<stdio.h>
#include<conio.h>

int add(int,int);

void main()
{
    int a,b,c;
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);
    c = add(a,b);
    printf("Sum is: %d",c);
    getch();
}

int add(int x,int y)
{
    int z;
    z = x+y;
    return(z);
}

// Program to add two numbers using 4th category of function( return type with argument)