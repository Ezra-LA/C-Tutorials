#include<stdio.h>
#include<conio.h>

void main()
{
    int x,*p,**q;
    p = &x;
    q = &p;

    printf("Enter a number:");
    scanf("%d",&x);

    printf("Value variable at x : %d",*p);
    printf("\nValue variable at *p : %d",*p);
    printf("\nValue available at **q : %d",**q);
    getch();
}

// Program to show the pointer to pointer