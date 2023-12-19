#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b;
    FILE *fp;
    fp = fopen("fl.txt","w");
    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);

    fprintf(fp,"%d\n%d\n%d",a,b,a+b);
    fclose(fp);
    getch();
}

// Writing a content in a file using fprintf()