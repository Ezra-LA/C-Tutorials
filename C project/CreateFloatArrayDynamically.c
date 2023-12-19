#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main()
{
    int a,i;
    float*p;
    printf("Numbers of elements to be entered:");
    scanf("%d",&a);

    p = (float*)calloc(a,sizeof(float));
    if(p==NULL)
    printf("Memory to be not allocated");
    else
    {
        printf("Enter %d number:\n",a);
        for(i=0;i<a;i++)
        scanf("%f",&p[i]);
        printf("The numbers entered are:\n");
        for(i=0;i<a;i++)
        printf("%f\n",p[i]);
    }
    free(p);
    getch();
}

// Program to create a float array dynamically using calloc().input values and display