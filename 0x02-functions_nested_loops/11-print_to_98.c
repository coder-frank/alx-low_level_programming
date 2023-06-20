#include <stdio.h>

/**
 * print_to_98 - prints from a number to 98
 * @n : number to start from
 * Return: the number to 98
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
	}
}
