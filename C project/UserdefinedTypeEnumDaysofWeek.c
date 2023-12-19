#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
    enum days{sun=1,mon,tue,wed,thur,fri,sat};
    int no;
    enum days d1;
    printf("Enter the no of week you want to see:");
    printf("\nYou want to exit then enter zero:\n");

    while(no)
    {
        scanf("%d",&no);
    

        d1=no;
        if(d1==sun)
        printf("The day is : Sunday\n");

        else if(d1==mon)
        printf("The day is : Monday\n");

        else if(d1==tue)
        printf("The day is : Tuesday\n");

        else if(d1==wed)
        printf("The day is : Wednesday\n");

        else if(d1==thur)
        printf("The day is : Thursday\n");

        else if(d1==fri)
        printf("The day is : Friday\n");

        else if(d1==sat)
        printf("The day is : Saturday\n");

        else if(d1!=0)
        {
            printf("You have exited");
            exit(0);
        }
        else
        {
            printf("You have exited");
            exit(0);
        }
    }
}

// Program to create a user defined type enum days of week and display all