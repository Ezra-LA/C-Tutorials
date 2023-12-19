#include<stdio.h>
#include<conio.h>

void swap(int*x,int*y);
void main()
{
    int a=10,b=20;
    printf("Without swaping a=%d and b=%d\n",a,b);
    swap(&a,&b);

    printf("After swaping a=%d and b=%d",a,b);
    getch();
}

void swap(int*x,int*y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}

// Program to swap two numbers using call by reference