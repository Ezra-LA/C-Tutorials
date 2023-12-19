#include<stdio.h>
#include<conio.h>

int length(char *s);

void main()
{
    char str[10];
    printf("Enter a string:");
    scanf("%s",str);

    printf("Your entered string is %s\n",str);
    printf("Length is %d",length(str));
    getch();
}

int length(char *s)
{
    int l;
    for(l=0;*(s+l)!='\0';l++);
    return(l);
}

// Program to print string and findout their length without using library function