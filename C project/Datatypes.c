#include<stdio.h>
#include<conio.h>

void main()
{
    int a;
    double b;
    float c;
    long int d;
    printf("Enter the first value:");
    scanf("%d",&a);
    printf("Enter the second value:");
    scanf("%lf",&b);
    printf("Enter the third value:");
    scanf("%f",&c);
    printf("Enter the fourth value:");
    scanf("%d",&d);
    printf("value of a=%d b=%lf c=%f d=%d",a,b,c,d);
    getch();
}

// Program to declare all data types like integer, double, float, long int and print value in specifies format