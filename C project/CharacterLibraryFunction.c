#include<stdio.h>
#include<conio.h>
#include<ctype.h>

void main()
{
    char ch;
    printf("\nCtype header file ");
    printf("\nEnter any character: ");
    scanf("%c",&ch);

    if(isalpha(ch))
        printf("\nEntered character is alphabetic");
    else
        printf("\nEntered character is not alphabetic");

    if(isdigit(ch))
        printf("\nEntered character is digit");
    else
        printf("\nEntered character is not digit");

    if(isalnum(ch))
        printf("\nEntered character is alphanumeric");
    else
        printf("\nEntered character is not alphanumeric");

    if(isalpha(ch))
        printf("\nEntered character is converted into " \
        "lower character : %c\n",tolower ( ch ) ) ;
    else
        printf("\nEntered character is not an alphabetic");
    
    if(isalpha(ch))
        printf("Entered character is converted into " \
        "upper character : %c\n",toupper ( ch ) ) ;
    else
        printf("\nEntered character is not an alphabetic");
    getch();
}

// Program for character library functions