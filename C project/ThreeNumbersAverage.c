#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,c;
    float Average;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    printf("Enter the third number:");
    scanf("%d",&c);
    Average = (a+b+c)/3.0;
    printf("The average is: %lf",Average);
    getch();
}

// Program to calculate the average of three numbers