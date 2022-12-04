/*
Author: Death-thekidd
Purpose: This program prints out my name to the screen
Date: 11/20/2022

*/

#include <stdio.h>
#define BITS sizeof(int) * 8

int main(int argc, char *argv[])
{
    int num = atoi(argv[1]);
    int n = atoi(argv[2]);

    int ones = 0, zeros = 0;


    for (int i = 0; i < BITS; i++)
    {
        if((1 << i) & num)
            ones++;
        else
            zeros++;

    }
    _Bool test = ((1 == 2) != 3);

    printf("test value : %d\n", test);

        printf("Output number of ones: %d\n", ones);
        printf("Output number of zeros: %d", zeros);


    return 0;
}
