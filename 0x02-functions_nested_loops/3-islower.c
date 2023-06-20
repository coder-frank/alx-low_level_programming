#include <stdio.h>
#include <ctype.h>
/**
 * _islower - Check Main
 * @c: An input character
 * Description: function uses _putchar function to print
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int _islower(char letter)
{
	int r;

	if (islower(letter))
	{
		r = 1;
	} else
	{
		r = 0;
	}
	return (r);
}
