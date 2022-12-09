/**
* main - Starting point
* Purpose: This program prints out my name to the screen
* Date: 11/20/2022
*/

#include <stdio.h>

int main()
{
    unsigned long long sum = 0;
    unsigned int count = 0;

    printf("\nEnter the number of integers you want to sum: ");
    scanf("%u", &count);

    for(unsigned int i = 1; i <= count; ++i)
        sum += i;

    printf("\nTotal of the first %u numbers is %u\n", count, sum);

    return 0;
}
