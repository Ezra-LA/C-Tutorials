#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
    char str[20],cs[20];
    char tt[]="bark";

    int l,i;
    printf("Enter a string:");

    gets(str);
    l = strlen(str);
    printf("\nLength of given string is: %d",l);

    strupr(str);
    printf("\nUpper case string : %s",str);

    strlwr(str);
    printf("\nLower case string : %s",str);

    strcpy(cs,str);
    printf("\nCopied string is : %s",cs);

    strcat(str,tt);
    printf("\nConcatenet string is : %s",str);

    strrev(str);
    printf("\nReversed string is : %s",str);

    getch();
}

// Program to perform string manipulation by using library function