#include "main"
/**
 * print_square - prints a square shape using # to the terminal for a number of times
 * @si: The number of time the shape /$ should be displayed
 */
void print_square(int size)
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
		for (int j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
