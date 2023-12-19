#include<stdio.h>
#include<conio.h>

void main()
{
    int a[10]={20,40,30,10,50,80,100,90,60,70};
    int round,i,t;

    printf("Before shorting :\n");

    for(i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }
    for(round=0;round<5;round++)
    {
        for(i=0;i<=10-round;i++)
        {
            if(a[i]>a[i+1])
            {
                t = a[i];
                a[i] = a[i+1];
                a[i+1] = t;
            }
        }
    }
    printf("\n After shorting :\n");

    for(i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }
    getch();
}

// Program to sort element of array in ascending order