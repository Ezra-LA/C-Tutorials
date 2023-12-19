#include<stdio.h>
#include<conio.h>

int z;          //global variable
int add(int,int);

void main()
{
    int a,b;          //Local variables
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);

    z = add(a,b);
    printf("Sum is %d",z);
    getch();
}
int add(int x,int y)
{
    z = x+y;
    return(z);
}

// Program to differentiate local and global varaible