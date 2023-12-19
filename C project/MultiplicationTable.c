#include<stdio.h>
#include<conio.h>

void main()
{
    int num,i;
    printf("Enter a number:");
    scanf("%d",&num);
    for(i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",num,i,num*i);
    }
    getch();
}

// Program to print multiplication of given number