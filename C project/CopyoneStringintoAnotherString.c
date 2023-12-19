#include<stdio.h>
#include<conio.h>

void main()
{
    char str[10]="computer";
    char cs[10];

    int i;
    for(i=0;str[i]!='\0';i++)
    {
        cs[i]=str[i];
    }
    str[8]='\0';
    puts(cs);
    getch();
}

// Program to copy one string into another string without using library function