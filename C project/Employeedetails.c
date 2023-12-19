#include<stdio.h>
#include<conio.h>

struct employee
{
    char name[10];
    int id;
    int salary;
};

void main()
{
    struct employee emp[5];
    {
        int i;
        printf("Enter any five employee's name, Id and Salary \n");
        for(i=0;i<=5-1;i++)
        {
            printf("\n Enter the %d employee name:",i+1);
            scanf("%s",&emp[i].name);
            printf("Enter the employee Id:",i+1);
            scanf("%d",&emp[i].id);
            printf("Enter the employee Salary:",i+1);
            scanf("%d",&emp[i].salary);
        }

        printf("\n");
        for(i=0;i<=5-1;i++)
        {
            printf("\n The %d employee Name is %s, Id is %d and Salary is %d :",i+1,emp[i].name,emp[i].id,emp[i].salary);
        }
        getch();
    }
}

// Program to read and print an employee's details like name,employee id,salary etc. using structure
