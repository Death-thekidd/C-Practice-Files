#include <stdio.h>
#include <stdlib.h>
#define rate_per_hour 12.0
#define overtime_rate 18.0
#define TAXRATE_300 .15
#define TAXRATE_150 .20
#define TAXRATE_REST .25
/**
* main - Starting point
* Return: 0
* Description: Calculates gross pay, taxes, net pay based
* on hours worked per week with input from user.
*/
int main()
{
    int hours_worked = 0;
    float gross = 0.0, taxes = 0.0, net_pay = 0.0;
    printf("Enter number of hours worked per week: ");
    scanf("%i", &hours_worked);
    if (hours_worked <= 40){
        gross = rate_per_hour * hours_worked;
        if (gross <= 300.0){
            taxes = TAXRATE_300 * gross;
        } else if (gross > 300.0 && gross <= 450.0) {
            taxes = TAXRATE_300 * gross;
        } else {
            taxes = TAXRATE_REST * gross;
        }
        net_pay = gross - taxes;
    } else {
        float overtime = hours_worked - 40;
        gross = (40 * rate_per_hour) + (float)(overtime * overtime_rate);
        if (gross <= 300){
            taxes = TAXRATE_300 * gross;
        } else if (gross > 300 && gross <= 450) {
            taxes = TAXRATE_150 * gross;
        } else {
            taxes = TAXRATE_REST * gross;
        }
        net_pay = gross - taxes;
    }
    printf("Your gross pay is: %.2f\n", gross);
    printf("Your total taxes are: %.2f\n", taxes);
    printf("Your net pay is: %.2f\n", net_pay);

    return 0;
}
