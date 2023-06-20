#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Gets the last digit of a number
 * @last: The number to be used
 * Description: The function takes a number as a parameter
 * and returns the last digit
 * Return: the last digit of the parameter provided
 */
int print_last_digit(int r)
{
	int n;

	if (r < 0)
		n = -1 * (r % 10);
	else
		n = r % 10;
	_putchar((n % 10) + '0');
	return (n % 10);
}
