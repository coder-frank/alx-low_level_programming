#include "main.h"
/**
 * print_triangle - prints a triangle shape using
 * # to the terminal for a number of times
 * @size: The number of time the shape /$ should be displayed
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i <= size; i++)
	{
		for (k = 0; k < size - i; k++)
		{
			_putchar(' ');
		}

		for (j = 0; j < i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
