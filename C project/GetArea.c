#include<stdio.h>
#include<conio.h>

void main()
{
    int choice,r,a,aos,w,h,bh,vh,aor,aot;
    float aoc;
    printf("\n11. Get area of circle:");
    printf("\n22. Get area of rectangle:");
    printf("\n33. Get area of square:");
    printf("\n44. Get area of triangle:\n:");
    scanf("%d",&choice);
    switch (choice)
    {
    case 11:
        printf("Enter the radius:");
        scanf("%d",&r);
        aoc=3.14*r*r;
        printf("Area of circle is: %d",aoc);
        break;

    case 22:
        printf("Enter the height:");
        scanf("%d",&h);
        printf("Enter the width:");
        scanf("%d",&w);
        aor=h*w;
        printf("Area of rectangle is: %d",aor);
        break;

    case 33:
        printf("Enter the length of one side:");
        scanf("%d",&a);
        aos=a*a;
        printf("Area of square is: %d",aos);
        break;

    case 44:
        printf("Enter the base:");
        scanf("%d",&bh);
        printf("Enter the vertical height:");
        scanf("%d",&vh);
        aot=0.5*bh*vh;
        printf("Area of triangle is: %d",aot);
        break;
    
    default:
    printf("Invalid choice");
    break;
    }
    getch();
}

// Program to get area of circle, rectangle, square or triangle using switch case