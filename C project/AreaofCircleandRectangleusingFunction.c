#include<stdio.h>
#include<conio.h>

void f1(int);
void f2(int a,int b);

void main()
{
    int l,ch;
    float r;
    printf("Circle");
    printf("\nEnter radius: ");
    scanf("%f",&r);

    f1(r);
    printf("\nRectangle");
    printf("\nEnter height:");
    scanf("%d",&l);
    printf("Enter width:");
    scanf("%d",&ch);
    f2(l,ch);
    getch();
}

void f1(int x)
{
    float aoc;
    aoc = 3.14*x*x;
    printf("Area of circle is %f\n",aoc);
}

void f2(int a,int b)
{
    int c;;
    c = a*b;
    printf("Area of rectangle is %d",c);
}

//Program to find area of circle and area of rectangle using function return type
