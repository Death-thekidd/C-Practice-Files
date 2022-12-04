#include <stdio.h>
#include <stdlib.h>

int main()
{
    int min = 0;
    double min_in_year = 525600.0;
    double years = 0.0, days = 0.0;

    printf("Input minutes: ");
    scanf("%d", &min);
    years = ((double) min)/min_in_year;
    days =   ((float)min / 1440);

    printf("Conversion to year is: %f\n", years);
    printf("Conversion to days is: %f\n", days);
    return 0;
}
