#include <stdio.h>
#include <ctype.h>

/**
 * @letter: The character to be checked
 * Description: The function takes a character as a parameter
 * and checks if its an alphabet
 * Return: 1 if the character is an alphabet, 0 otherwise
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
