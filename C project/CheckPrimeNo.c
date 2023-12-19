#include<stdio.h>
#include<conio.h>

void main()
{
    int n,i;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            printf("Not a prime number");
            break;
        }
    }
    if(i==n)
    printf("Prime number");
    getch();
}

// Program to check whether the no is prime or not