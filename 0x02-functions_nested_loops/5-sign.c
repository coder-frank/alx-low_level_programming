#include <stdio.h>

/**
 * print_sign - Check if a number is greater than, less than or equal to 0
 * @n: The number to be checked
 * Description: The function takes a number as a parameter
 * and checks if its greater than, less than, or equal to 0
 * Return: 1 if the number greater than 0,
 * 0 if its equal to 0, otherwise -1
 */
int print_sign(int n)
{
	int r;

	if (n > 0)
	{
		printf("+1");
		r = 1;
	} else if (n == 0)
	{
		printf("00");
		r = 0;
	} else
	{
		printf("-1");
		r = -1;
	}
	return (r);
}
