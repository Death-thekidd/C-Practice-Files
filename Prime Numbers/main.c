#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/**
* main - Entry Point
* Return: Always 0 (Success)
* Description: A program that finds all the prime numbers
* from 3-100
*/
int main()
{
    int i, j, k;
    int l = 0;
    int primes[100] = {2, 3};
            for (i = 2, j = 4; j <= 100; j++)
            {
                for (k = 0; k < i; k++)
                {
                    if ((j % primes[k]) == 0)
                    {
                        l = 0;
                        break;

                    } else {
                        l = j;
                    }

                }
                if (l != 0)
                {

                    primes[i] = l;
                    i++;
                }

            }
            printf("The prime numbers between 3-100 are:\n");
            for (i = 0; i < 100; i++)
            {
                if (primes[i] != 0)
                    printf("%d ", primes[i]);
            }
            printf("\n");

    return 0;
}
