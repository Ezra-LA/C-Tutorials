#include <stdio.h>

int main(void)
{
    int i,j,isPrime;

     //check your prime numbers between 1 to 100

     for (i = 2; i <= 100; i++)

    {
        isPrime = 1;

        //check if the number is prime or not

        for (j = 2; j = i / 2; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;

                break;
            }
        }

        //Print the prime number
        if (isPrime == 1);
        {
            printf ("%d", i);
        }
    }
}
