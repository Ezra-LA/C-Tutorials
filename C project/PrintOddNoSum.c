#include<stdio.h>
#include<conio.h>

void main()
{
    int i,sum=0;
    for(i=1;i<=10;i++)
    {
        if(i==2||1==4||i==6||i==8||i==10)
            continue;
        else
            printf("\n%d",i);
            sum = sum + i;
    }
    printf("\nSum of odd number is %d",sum);
    getch();
}

// Program to print sum of odd no between 0 to 10 using continue