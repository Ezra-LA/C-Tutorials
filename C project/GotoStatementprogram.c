#include<stdio.h>
#include<conio.h>

void main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n%2==0)
        goto even;
    else
        goto odd;
    odd:
        printf("Odd number");
        goto end;
    even:
        printf("Even number");
        goto end;
    end:
    getch();
}

// Program to identify odd or even number using goto statement