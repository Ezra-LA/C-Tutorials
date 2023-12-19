#include<stdio.h>
#include<conio.h>

int recu(int,int);
void main()
{
    int base,a;
    int result;
    printf("\tEnter the base number: ");
    scanf("%d",&base);
    printf("\n\tEnter power number: ");
    scanf("%d",&a);
    result = recu(base,a);
    printf("\n\tGiven number is %d and power is %d and result is: %d",base,a,result);
    getch();
}

int recu(int base,int a)
{
    if(a!=0)
    {
        base = base*recu(base,a-1);
        return(base);
    }
    else
    return 1;
}

// Program to calculate power using recursion