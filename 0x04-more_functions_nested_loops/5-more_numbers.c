#include "main.h"
/**
 * more_numbers - prints all numbers from 0 - 14, 10 times
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
			{
				_putchar(j % 10);
				_putchar(j % 10);
			} else
			{
				_putchar(j);
			}
		}
		_putchar('\n');
	}
}
