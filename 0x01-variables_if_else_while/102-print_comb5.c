#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int tens1, ones1, tens2, ones2;

	tens1 = 0;
	while (tens1 <= 9)
	{
		ones1 = 0;
		while (ones1 <= 9)
		{
			tens2 = tens1;
			while (tens2 <= 9)
			{
				ones2 = (tens2 == tens1) ? ones1 + 1 : 0;
				while (ones2 <= 9)
				{
					putchar(tens1 + '0');
					putchar(ones1 + '0');
					putchar(' ');
					putchar(tens2 + '0');
					putchar(ones2 + '0');

					if (!(tens1 == 9 && ones1 == 8 && tens2 == 9 && ones2 == 9))
					{
						putchar(',');
						putchar(' ');
					}

					ones2++;
				}
				tens2++;
			}
			ones1++;
		}
		tens1++;
	}

	putchar('\n');

	return (0);
}
