#include<stdio.h>
#include<conio.h>

void fl(void);
void main()
{
    fl();
    fl();
    getch();
}
void fl()
{
    static int x;
    x++;
    printf("Value is %d\n",x);
}

// Program to show use of static varaible