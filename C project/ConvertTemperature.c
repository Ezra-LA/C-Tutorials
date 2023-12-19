#include<stdio.h>
#include<conio.h>

void main()
{
    float c,f;
    printf("Enter the centigrade:");
    scanf("%f",&c);
    f=c*9/5+32;
    printf("Temperature in fahrenheit is: %f",f);
    getch();
}