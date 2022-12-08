/**
* main - Starting point
* Purpose: This program prints out my name to the screen
* Date: 11/20/2022
*/

#include <stdio.h>

int main()
{
    enum Weekday {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
    enum Weekday today = Wednesday;

    switch(today)
    {
    case Sunday:
        printf("Today is Sunday.");
        break;
    case Monday:
        printf("Today is Monday.");
        break;
    case Tuesday:
        printf("Today is Tuesday.");
        break;
    default:
        printf("Whatever");
        break;
    }
    return 0;
}
