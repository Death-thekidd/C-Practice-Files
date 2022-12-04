#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Byte size of int: %u\n", sizeof(int));
    printf("Byte size of short: %u\n", sizeof(short));
    printf("Byte size of char: %u\n", sizeof(char));
    printf("Byte size of long: %u\n", sizeof(long));
    printf("Byte size of long long: %u\n", sizeof(long long));
    printf("Byte size of float: %u\n", sizeof(float));
    printf("Byte size of double: %u\n", sizeof(double));
    printf("Byte size of long double: %u\n", sizeof(long double));
    return 0;
}
