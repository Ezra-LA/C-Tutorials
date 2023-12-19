#include<stdio.h>
#include<conio.h>

void main()
{
    int a,b,c,d,e,total;
    float per;
    printf("Enter your Math marks:");
    scanf("%d",&a);
    printf("Enter your English marks:");
    scanf("%d",&b);
    printf("Enter your Science marks:");
    scanf("%d",&c);
    printf("Enter your Social Studies marks:");
    scanf("%d",&d);
    printf("Enter your CRE marks:");
    scanf("%d",&e);

    total = a+b+c+d+e;
    printf("\nTotal marks is %d\n",total);
    per = total*100/(5.0*100);
    printf("Percent is %f\n",per);
    if(per>80)
    {
        printf("A+");
    }
    else
    {
        if(per>=65&&per<=80)
        printf("A");
        else
        {
            if(per>=50&&per<=65)
            printf("B");
            else
            {
                if(per>=42&&per<=50)
                printf("C");
                else
                printf("Fail");
            }
        }
    }
    getch();
}

// Program to take input of 5 subject, find total and calculate percent