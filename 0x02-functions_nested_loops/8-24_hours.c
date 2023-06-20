#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - prints out a 24 hours clock
 * Description: The function takes a displays a clock from 00:00 to 23:59
 * Return: the clock
 */
void jack_bauer(void)
{
	int H, M;

	for (H = 0; H < 24; H++)
	{
		for (M = 0; M < 60; M++)
		{
			_putchar((H / 10) + '0');
			_putchar((H % 10) + '0');
			_putchar(':');
			_putchar((M / 10) + '0');
			_putchar((M % 10) + '0');
			_putchar('\n');
		}
	}
}
