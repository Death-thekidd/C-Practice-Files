#include <stdio.h>
#include <stdlib.h>
#define NUMOFYEARS 5
#define MONTHS 12
/**
* main - Entry point
* Return: Always (0) Success
* Description: This program will find the total rainfall
* for each year, the average yearly rainfall, and the
* average rainfall for each month.
*/

int main()
{
    int i, j, k;
    float sumYear, total, average, sumMonth, averageMonth;
    float arr[NUMOFYEARS][MONTHS] =
    {
        {7.5, 6.5, 6.6, 6.0, 3.4, 1.7, 1.4, 2.2, 5.0, 3.2, 3.0, 6.5},
        {7.5, 6.5, 6.6, 6.0, 3.4, 1.7, 1.4, 2.2, 5.0, 3.2, 3.0, 6.5},
        {7.5, 6.5, 6.6, 6.0, 3.4, 1.7, 1.4, 2.2, 5.0, 3.2, 3.0, 6.5},
        {7.5, 6.5, 6.6, 6.0, 3.4, 1.7, 1.4, 2.2, 5.0, 3.2, 3.0, 6.5},
        {7.5, 6.5, 6.6, 6.0, 3.4, 1.7, 1.4, 2.2, 5.0, 3.2, 3.0, 6.5}
    };

    printf("YEAR\tRAINFALL  (inches)\n");
    for (i = 2010, j = 0; i <= 2014; i++, j++)
    {
        for(sumYear = 0, k = 0; k < MONTHS; k++)
        {
            sumYear += arr[j][k];
        }
        printf("%d\t%.1f\n", i, sumYear);
        total += sumYear;

    }

    average = total / NUMOFYEARS;
    printf("\nThe yearly average is %.1f inches.\n", average);

    printf("\nMONTHLY AVERAGES:\n");
    printf("\nJan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec\n");
    for (i = 0; i < MONTHS; i++)
    {
        for(sumMonth = 0, k = 0; k < NUMOFYEARS; k++)
        {
            sumMonth += arr[k][i];
        }
        averageMonth = sumMonth / NUMOFYEARS;
        printf("%.1f ", averageMonth);

    }
    printf("\n");
    return 0;
}
