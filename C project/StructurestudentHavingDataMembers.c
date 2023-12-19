#include<stdio.h>
#include<conio.h>

struct student
{
    int rollNo;
    char studentName[10];
    char subjectName[10];
    int Marks;
};

void main()
{
    struct student sRollNo,sName[2],sSub[3],sMark;
    int i,j;
    printf("Enter any two student's name,Roll Number, the three subject and student marks \n");
    for(i=0;i<=2-1;i++)
    {
        printf("\n Enter the student name:",i+1);
        scanf("%s",&sName[i].studentName);
        printf("Enter Roll number:");
        scanf("%d",&sRollNo.rollNo);
    }
    printf("\n");

    for(i=0;i<=2-1;i++)
    {
        for(j=0;j<=3-1;j++)
        {
            printf("\n Enter the %dst subject:",j+1);
            scanf("%s",&sSub[j].subjectName);
            printf("Enter marks for %d student:",i+1);
            scanf("%d",&sMark.Marks);
        }
    }

    for(i=0;i<=2-1;i++)
    {
        printf("\n The %dst student name is %s and Roll number %d",i+1,sName[i].studentName,sRollNo.rollNo);
    }

    for(i=0;i<=2-1;i++)
    {
        for(j=0;j<=3-1;j++)
        {
            printf("\n The %dst subject is %s and marks gets %d student is %d",j+1,sSub[j].subjectName,i+1,sMark.Marks);
        }
    }
    getch();
}

// Program with structure student having data members to store roll number,name of student,name of three subjects,max marks,min marks. Declare a structure variable of student provide facilities to input data in data member and display result of student