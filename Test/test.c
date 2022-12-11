#include <stdio.h>
#define MONTHS 12

/**
* main - Starting point
* Purpose: This program prints out my name to the screen
* Date: 11/20/2022
*/

int main()
{
    int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int index;

    for (index = 0; index < MONTHS; index++)
        printf("Month %d has %2d days.\n", index + 1, days[index]);

    return 0;
}
