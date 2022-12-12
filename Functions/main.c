#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int gcdFind(int value1, int value2);
float absValue(float value);
float squareRoot(float value);
/**
* main - Entry Point
* Return: Always 0 (Success)
* Description: Prints the GCD, absolute value and
* square root.
*/
int main()
{
    int gcd;
    float abs, root;

    gcd = gcdFind(6, 3);
    abs = absValue(-2.0);
    root = squareRoot(16.0);
    printf("The GCD is: %d\n", gcd);
    printf("The absolute value is %.1f\n", abs);
    printf("The square root is %.1f\n", root);
    return (0);
}

/**
* gcdFind - Calculates the Greatest Common
* divisor of the two given inputs.
* Return: The GCD of the inputs
*/
int gcdFind(int value1, int value2)
{
    int iterateValue = value1 > value2 ? value2 : value1;
    int i, j;
    for (i = 1; i <= iterateValue; i++)
    {
        bool check = (value1 % i == 0) && (value2 % i == 0);
        if(check)
            j = i;
    }
    return (j);
}

/**
* absValue - Calculates the absolute value of
* given input.
* Return: The absolute value of the input
*/
float absValue(float value)
{
    if (value < 0)
        return (value * -1);
    else
        return (value);
}

/**
* squareRoot - Calculates the square root of
* given input.
* Return: The square root of the input
*/
float squareRoot(float value)
{
    if (value < 0)
        return (-1.0);

    float root;
    root = pow(value, 0.5);

    return (root);
}
