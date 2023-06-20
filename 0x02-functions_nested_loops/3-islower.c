#include <stdio.h>
#include <ctype.h>
/**
 * _islower - Check Main
 * letter - this is a function parameter
 * Description: function uses _islower
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
