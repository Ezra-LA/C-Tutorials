#include<stdio.h>
#include<conio.h>

void main()
{
    int n,i,a=-1,b=1,c;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d",c);
    }
    getch();
}

// Program to find fibonacci series upon n terms
