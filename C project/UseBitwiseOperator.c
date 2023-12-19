#include<stdio.h>
#include<conio.h>

void main()
{
    int x;
    x = 62;
    printf("Before any shifting the value is %d\n",x);
    x = 62<<2;
    printf("After left shifting the value is %d\n",x);
    x = 62>>2;
    printf("After right shifting the value is %d\n",x);
    getch();
}

// Program to use of bitwise operator(left shift and right shift)