#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>

void main()
{
    int n,x;
    float y;
    while(1)
    {
        printf("\n\t\n\tChoose the function to perform: ");
        printf("\n\t1. Sqrt function ");
        printf("\n\t2. Power function ");
        printf("\n\t3. Ceil function ");
        printf("\n\t4. Floor function ");
        printf("\n\t5. Exit ");
        printf("\n\t   Choose: ");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
            printf("\n\tSqrt function ");
            printf("\n\tEnter number: ");
            scanf("%d",&x);
            y = sqrt(x);
            printf("\n\tAnswer is: %f",y);
            break;

            case 2:
            printf("\n\tPower function ");
            printf("\n\tEnter number: ");
            scanf("%d",&x);
            y = pow(x,2);
            printf("\n\tAnswer is %f",y);
            break;

            case 3:
            printf("\n\tCeil function ");
            printf("\n\tEnter number: ");
            scanf("%d",&x);
            y = ceil(x);
            printf("\n\tAnswer is %f",y);
            break;

            case 4:
            printf("\n\tFloor function ");
            printf("\n\tEnter number: ");
            scanf("%d",&x);
            y = floor(x);
            printf("\n\tAnswer is %f",y);
            break;

            case 5:
            printf("\n\tSuccessfully exited!\n");
            exit(0);

            default:
            printf("\n\tInvalid option ");
        }
    }
    getch();
}

// Program to perform Math and Library characater function using switch case