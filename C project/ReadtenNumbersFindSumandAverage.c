#include<stdio.h>
#include<conio.h>

void main()
{
    int i,sum=0;
    float avg;

    printf("Enter 10 number: \n");
    for(i=1;i<=10;i++)
    {
        scanf("%d",&i);
        sum = sum+i;
    }
    avg = sum/10.0;
    printf("Sum is: %d\n",sum);
    printf("\nAverage is: %f",avg);
    getch();
}

// Program to read 10 numbers from keyboard and find their sum and average