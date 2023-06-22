#include "main"
/**
 * print_square - prints a square shape using
 * # to the terminal for a number of times
 * @size: The number of time the shape /$ should be displayed
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i <= size; i++)
	{
		for (int k = 0; k < size - i; k++)
		{
			_putchar(' ');
		}

		for (int j = 0; j < i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
