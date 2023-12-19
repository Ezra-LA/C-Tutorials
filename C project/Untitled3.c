#include <stdio.h>

int main()
{
    int i;

    // List odd numbers between 1 to 400
    for (i = 1; i <= 400; i++) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }

    putchar('\n');
    return 0;
}
