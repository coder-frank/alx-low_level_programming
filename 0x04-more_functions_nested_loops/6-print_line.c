#include "main"
/**
 * print_line - prints the character _ for a number of times
 * @n: The number of time the character _ should be displayed
 */
void print_line(int n)
{
	int i;
	
	if (n == 0)
	{
		_putchar('\n');
		return (0);
	}

	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}