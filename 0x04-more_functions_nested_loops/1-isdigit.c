#include "main.h"
/**
 * _isdigit - Checks if a character is a number
 * @num: The character to be checked
 * Return: returns 1 if the character is a digit, otherwise 0
 */
int _isdigit(int num)
{
	int result;

	if ((num >= 0 && num <= 9) || (num >='0' && num <= '9'))
		result = 1;
	else
		result = 0;
	return (result);
}
