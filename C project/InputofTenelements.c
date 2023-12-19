#include<stdio.h>
#include<conio.h>

void main()
{
    int a[10],i;
    printf("Enter 10 numbers:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Your entered number is: ");
    for(i=0;i<10;i++)
    {
        printf("\n%d",a[i]);
    }
    getch();
}

// Program to take input of ten elements, store and display it using one-dimensional array