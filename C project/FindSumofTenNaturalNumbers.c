#include<stdio.h>
#include<conio.h>

void main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int i,sum=0;
    for(i=0;i<10;i++)
    {
        sum=sum+a[i];
    }
    printf("Sum of 10 natural number is: %d",sum);
    getch();
}

// Program to find sum of 10 natural numbers using 1 dimensional array