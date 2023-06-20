#include <stdio.h>
#include <ctype.h>

/**
 * _islower - checks if a character is a lowercase 
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
