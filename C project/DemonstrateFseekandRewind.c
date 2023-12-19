#include<stdio.h>
#include<conio.h>

void main()
{
    char str[30];
    FILE *fp;
    fp = fopen("fl.txt","r+");
    fgets(str,20,fp);
    printf("File is : %s",str);

    fseek(fp,10,0);
    fputs("Programming",fp);

    rewind(fp);
    fgets(str,25,fp);
    printf("\nFile is : %s",str);

    fclose(fp);
    getch();
}