#include "main.h"
/**
 * more_numbers - prints all numbers from 0 - 14, 10 times
 */
void more_numbers(void)
{
	int i;
	int j;
	int m;
	int n;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
			{
				m = j / 10;
				n = j % 10;
				_putchar(m + '0');
				_putchar(n + '0');
			} else
			{
				_putchar(j + '0');
			}
		}
		_putchar('\n');
	}
}
