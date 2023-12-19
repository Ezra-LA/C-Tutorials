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
fp=fopen("mybook.dat","rb");
while(fread(&b1,sizeof(b1),1,fp)>0)
{
printf("%d %s %f\n",b1.bookid,b1.title,b1.price);
}
fclose(fp);
}

// Read file using freadf function