#include "main"
/**
 * print_most_numbers - prints all numbers from 0 - 9 except for 2 and 4
 */
void print_most_numbers(void)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		_putchar(i);
		_putchar('\n');
	}
}
