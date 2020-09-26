#include <stdio.h>

int main()
{
    int counter;

    puts(" BLAHA LBALAH ");

    for(counter = 1 ; counter < 10; counter++)
    {
        printf("%d + %d = %d\n", counter, counter, counter + counter );
    }
    return 0;
}