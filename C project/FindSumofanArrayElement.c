#include<stdio.h>
#include<conio.h>

int sum(int *p);

void main()
{ 
    int a[5]={2,3,5,6,7};
    int s;
    s=sum(a);

    printf("sum is %d",s);
    getch();
}

int sum(int *p)
{  
    int i,s=0;
    for(i=0;i<5;i++)
    {
        s=s+(*(p+i));
    }
    return(s);
}

// Program to find the sum of an array element using pointer and function