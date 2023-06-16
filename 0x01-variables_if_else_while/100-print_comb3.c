#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	j = 1;
	while (i < 10)
	{
		putchar(i + '0');
		putchar(j + '0');

		if (i == 8 && j == 9)
		{
			break;
		}
		else if (j == 9)
		{
			i++;
			j = 1;
		}
		else
		{
			j++;
		}

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
