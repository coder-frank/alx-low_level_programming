#include "main.c"
#include <ctype.h>
/**
 * _isupper - Checks if a character is an upper case
 * @letter: The character to be checked
 * Return: returns 1 if the character is an uppercase, otherwise 0
 */
int _isupper(int letter)
{
	int result;

	if (isupper(letter))
	{
		result = 1;
	} else
	{
		result = 0;
	}
	return (result);
}
