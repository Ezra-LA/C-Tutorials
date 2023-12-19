#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,c,result;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    printf("Enter the third number:");
    scanf("%d",&c);
    if(a>b)
    {
        if(a>c)
        result=a;
        else
        result=c;        
    }
    else
    {
        if(b>c)
        result=b;
        else
        result=c;
    }
    printf("Greater number is %d",result);
    getch();
}

// Program to find largest no among three numbers