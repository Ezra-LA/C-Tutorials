#include<stdio.h>
#include<conio.h>

void main()
{
    int a[3][3],b[3][3],c[3][3],i,j;
    
    printf("Enter all elements of first matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("\t%d",&a[i][j]);
        }
    }

    printf("Enter all elements of second matrix :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("\t%d",&b[i][j]);
        }
    }

    printf("Sum of matrices are:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("\t%d",c[i][j]);
        }
        printf("\n");
    }
}

// Program to perform maddition of two matrix