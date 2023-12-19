#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct emp
{
    int id;
    char name[20];
};

void main()
{
    struct emp* p;
    int record,i;
    p = (struct emp*)malloc(record*sizeof(struct emp));

    if(p==NULL)
    printf("Memory is not allocated");
    else
    printf("Enter number of record:");
    scanf("%d",&record);

    for(i=1;i<=record;i++)
    {
        printf("\nEnter employee Id:");
        scanf("%d",&(p+i)->id);
        printf("Enter employee name:");
        scanf("%s",&(p+i)->name);
    }

    for(i=1;i<=record;i++)
    {
        printf("\nEmployee id=%d\nEmployee name=%s",(p+i)->id,(p+i)->name);
    }
    getch();
}

//Program to read and print the student details using structure and dynamic memory allocation. Using malloc()