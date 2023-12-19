#include<stdio.h>
#include<conio.h>

void main()
{
    int no,re,binary=0,i=1,var;
    printf("Enter a number:");
    scanf("%d",&no);
    var = no;
    while(no!=0)
    {
        re = no%2;
        no = no/2;
        binary = binary+(re*i);
        i = i*10;
    }
    printf("Binary equivalent of %d is %d",var,binary);
    getch();
}

// Program to convert decimal to binary