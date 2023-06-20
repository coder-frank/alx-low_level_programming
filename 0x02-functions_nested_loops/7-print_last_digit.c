#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Gets the last digit of a number
 * @last: The number to be used
 * Description: The function takes a number as a parameter
 * and returns the last digit
 * Return: the last digit of the parameter provided
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
		last *= -1;
	_putchar(last);
	return (last);
}
