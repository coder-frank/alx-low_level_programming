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
	if (n > 0)
	{
		puts("%d is positive", n);
	} else if (n == 0)
	{
		puts("%d is zero", n);
	} else
	{
		puts("%d is negative", n);
	}
	return (0);
}
