#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum Company { GOOGLE = 'g', FACEBOOK, XEROX = 'x', YAHOO, EBAY = 'e', MICROSOFT };

    enum Company xerox, google, ebay;
    xerox = XEROX;
    google = GOOGLE;
    ebay = EBAY;
    printf("The value of xerox is: %c\nThe value of google is: %c\nThe value of ebay is: %c\n", xerox, google, ebay);
    return 0;
}
