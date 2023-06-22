#include "main.c"
#include <ctype.h>
/**
 * _isupper - Checks if a character is an upper case
 * @c: The character to be checked
 * Return: returns 1 if the character is an uppercase, otherwise 0
 */
int _isupper(int c)
{
	if (isupper((unsigned char)c))
	{
		return (1);
	} else
	{
		return (0);
	}
}
