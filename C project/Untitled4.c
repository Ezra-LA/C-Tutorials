#include <stdio.h>

int main()
{
    int i;

    //List odd numbers between 1 to 400
    for (i = 1; i <= 80; i++)
     if (i % 2 != 0)
     {
        printf("%d", i);
     }

     putchar (',');
     return (0);
}
