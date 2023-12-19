#include<stdio.h>
#include<conio.h>

void main()
{
    int a[6],b[3],i;
    printf("Enter 6 numbers for matrix :\n");
    for(i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\nTransport matrix:\n");
    for(i=0;i<6;i++)
    {
        b[i]=a[i];
    }

    printf("After transport is :\n");
    for(i=0;i<6;i++)
    {
        printf("%d\n",b[i]);
    }
    getch();
}

// Program to find transpose of a matrix