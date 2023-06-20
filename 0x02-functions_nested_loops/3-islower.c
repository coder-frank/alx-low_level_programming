#include <stdio.h>
#include <ctype.h>
/**
 * _islower - checks if a character is a lowercase
 * letter - character to check
 * r - is 1 or 0 if the character is or not a lowercase
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
