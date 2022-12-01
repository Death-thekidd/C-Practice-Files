/*
Author: Death-thekidd
Purpose: This program prints out my name to the screen
Date: 11/20/2022

*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int numberOfArrguments = argc;
    char *argument1 = argv[0];
    char *argument2 = argv[1];

    printf("Number of Arguments: %d\n", numberOfArrguments);
    printf("Argument 1 is the program name: %s\n", argument1);
    printf("Argument 2 is the command line argument: %s\n", argument2);

    return 0;
}
