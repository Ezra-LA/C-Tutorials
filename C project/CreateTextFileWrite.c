#include<stdio.h>
#include<conio.h>

void main()
{ 
    struct book
    {
    int bookid;
    char title[20];
    float price;
    }b1;

    FILE *fp;
    fp=fopen("mybook.dat","ab");
    printf("enter bookid, title and price : ");
    scanf("%d",&b1.bookid);
    fflush(stdin);
    gets(b1.title);
    scanf("%f",&b1.price);
    fwrite(&b1,sizeof(b1),1,fp);
    fclose(fp);
}

// Write using fwrite function