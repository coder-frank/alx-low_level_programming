#include <stdio.h>
#include "main.h"
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
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
