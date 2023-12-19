#include<stdio.h>
#include<conio.h>

struct book
{
    char bname[10];
    int bid;
    float bprice;
};

void main()
{
    int i;
    struct book b1[3];
    for(i=0;i<3;i++)
    {
        printf("\n Enter the %dst book name:",i+1);
        scanf("%s",&b1[i].bname);
        printf("Enter Id:");
        scanf("%d",&b1[i].bid);
        printf("Enter the price:");
        scanf("%f",&b1[i].bprice);
    }

    printf("\n");

    for(i=0;i<3;i++)
    {
        printf("\n The %dst book Name is %s, Id is %d and price is %f",i+1,b1[i].bname,b1[i].bid,b1[i].bprice);
    }
    getch();
}

// Program to demonstrate structure of an array