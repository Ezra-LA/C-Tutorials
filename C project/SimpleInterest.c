#include<stdio.h>
#include<conio.h>

void main()
{
    int p,t;
    float r;
    float SI;
    printf("Enter the principal:");
    scanf("%d",&p);
    printf("Enter the rate:");
    scanf("%f",&r);
    printf("Enter the time in years:");
    scanf("%d",&t);
    SI = (p*r*t)/100;
    printf("Simple interest is %f",SI);
    getch();
}

// Program to calculate simple interest