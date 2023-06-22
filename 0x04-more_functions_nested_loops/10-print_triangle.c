#include "main"
/**
 * print_square - prints a square shape using # to the terminal for a number of times
 * @si: The number of time the shape /$ should be displayed
 */
void print_triangle(int size)
{
	int i;
	int j;
	if (size <= 0)
	{
		putchar('\n');
		return;
	}
	for (i = 0; i <= size; i++)
	{
		for (int k = 0; k < size - i; k++)
		{
			putchar(' ');
		}
		for (int j = 0; j < i; j++)
		{
			putchar('#');
		}
		putchar('\n');
	}
	putchar('\n');
}
