/* Author: Death-thekidd
   Purpose: This program is going to calculate the area and perimeter of a rectangle
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    double height = atoi(argv[1]), width = atoi(argv[2]), perimeter = 0.0, area = 0.0;

    perimeter = 2.0 * (height + width);
    area = height * width;

    printf("Width is: %.2f, Height is: %.2f, Perimeter is: %f\n", width, height, perimeter);
    printf("Area is: %f\n", area);
    return 0;
}
