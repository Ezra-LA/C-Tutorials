#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,c;
    FILE *fp;

    fp = fopen("fl.txt","r");
    fscanf(fp,"%d\n%d\n%d",&a,&b,&c);
    printf("Sum of a=%d and b=%d is %d",a,b,c);
    fclose(fp);
    getch();
}

// Program to read the content in a file using fscanf()