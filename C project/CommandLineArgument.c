#include<stdio.h>
#include<conio.h>

void main(int arg,char*argv[])
{
    int i;
    printf("Number of argument is: %d",arg);
    for(i=0;i<arg;i++)
    {
        if(i<=0)
        printf("\nFile-name is %s",argv[i]);
        else
        printf("\nArgument Name is %s",i+1,argv[i]);
    }
    getch();
}

// Program to demonstrate command line argument