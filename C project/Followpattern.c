#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,x=1;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j<=i)
            printf("%d",x);
            x++;
        }
        printf("\n");
    }
    getch();
}

// Program to generate following pattern
