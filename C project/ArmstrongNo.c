#include<stdio.h>
#include<conio.h>

void main()
{
    int n,r,s,x;
    printf("Armstrong numbers are :\n");
    for(n=1;n<=1000;n++)
    {
        x = n;
        s = 0;
        while(x!=0)
        {
            r = x%10;
            s = s+r*r*r;
            x = x/10;
        }
        if(s==n)
        printf("%d\n",n);
    }
}

// Program to check armstrong numbers