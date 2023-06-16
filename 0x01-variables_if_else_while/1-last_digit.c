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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	char message[30];
	if (n > 5)
	{
		message = "and is greater than 5";
	} else if (n == 0)
	{
		message = "and is 0";
	} else if (n < 6 && n != 0)
	{
		message = "and is less than 6 and not 0";
	}
	printf("Last digit of %d is %s\n", n, message);
	return (0);
}
