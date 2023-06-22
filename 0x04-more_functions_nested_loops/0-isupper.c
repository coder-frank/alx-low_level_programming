#include "0-main.c"
#include <ctype.h>
/**
 * _isupper - Checks if a character is an upper case
 * @c: The character to be checked
 * Return: returns 1 if the character is an uppercase, otherwise 0
 */
int _isupper(int c)
{
	int res;

	if (c >= 'A' && c <= 'Z')
		res = 1;
	else
		res = 0;
	return (res);
}
