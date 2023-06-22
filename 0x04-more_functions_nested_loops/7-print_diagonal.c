#include "main.h"
/**
 * print_diagonal - prints a diagonal shape
 * of / to the terminal for a number of times
 * @n: The number of time the shape /$ should be displayed
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (int j = 0; j < i; j++)
				_putchar(' ');
			_putchar('\');
			_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
	
}
