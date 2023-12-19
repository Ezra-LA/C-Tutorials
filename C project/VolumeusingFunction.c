#include<stdio.h>
#include<conio.h>

void f1(int,int,int);
void main()
{
    int a,b,c;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("Enter third number: ");
    scanf("%d",&c);

    f1(a,b,c);
    getch();
}

void f1(int x,int y,int z)
{
    int v;
    v = x*y*z;
    printf("Volume is %d",v);
}

// Program to calculate volume using function