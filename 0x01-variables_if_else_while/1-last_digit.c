#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;
    int lastDigit;
    char message[30];

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    lastDigit = abs(n % 10);

    if (lastDigit > 5)
    {
        sprintf(message, "and is greater than 5");
    }
    else if (lastDigit == 0)
    {
        sprintf(message, "and is 0");
    }
    else
    {
        sprintf(message, "and is less than 6 and not 0");
    }

    printf("Last digit of %d is %d %s\n", n, lastDigit * (n < 0 ? -1 : 1), message);
    return (0);
}
