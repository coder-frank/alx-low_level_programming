#include <stdio.h>
#include "main.h"
/**
 * print_times_table - prints the times table from 0 - a specified number
 * @n: the number to be specified
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
int r, c, d;

	for (r = 0; r <= n; r++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
	for (c = 1; c <= n; c++)
	{
		d = (r * c);
	if ((d / 10) > 0)
	{
		_putchar((d / 10) + '0');
	}
	else
	{
		_putchar(' ');
	}
		putchar((d % 10) + '0');

	if (c < 9)
	{
		_putchar(',');
	     _putchar(' ');
	}
	}
	putchar('\n');
	}

}
