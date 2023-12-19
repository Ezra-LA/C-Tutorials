#include<stdio.h>
#include<conio.h>

void main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is Odd");
    }
    getch();
}

// Program to find odd no or even no using if else statement