#include<stdio.h>
#include<conio.h>

void swap(int x,int y);
void main()
{
    int a=10,b=20;
    printf("Without swaping a=%d and b=%d\n",a,b);
    swap(a,b);
    getch();
}

void swap(int x,int y)
{
    int t;
    t = x;
    x = y;
    y = t;
    printf("After swaping a=%d and b=%d",x,y);
}

// Program to swap two numbers using call value