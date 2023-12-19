#include<stdio.h>
#include<conio.h>

void main()
{
    int n,re,sum=0;
    printf("Enter any digit:");
    scanf("%d",&n);
    while(n>0)
    {
        re=n%10;
        sum = sum + re;
        n = n/10;
    }
    printf("Sum of given is: %d",sum);
    getch();
}