#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point of program
 *
 * Return: Always 0 (Success)
 */
int _isalpha(char letter)
{
	int r;

	if (isalpha(letter))
	{
		r = 1;
	} else
	{
		r = 0;
	}
	return (r);
}

int main(void)
{
	int r;

	r = _isalpha('H');
	putchar(r + '0');
	r = _isalpha('o');
	putchar(r + '0');
	r = _isalpha(108);
	putchar(r + '0');
	r = _isalpha(';');
	putchar(r + '0');
	putchar('\n');
	return (0);
}
