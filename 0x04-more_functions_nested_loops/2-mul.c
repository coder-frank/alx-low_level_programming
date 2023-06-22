#include "main.h"
/**
 * mul - Checks if a character is a number
 * @num1: The first number to be multiplied with
 * @num2: The second number to be multiplied to
 * Return: returns the product of the two numbers
 */
int mul(int num1, int num2)
{
	int result;

	result = num1 * num2;
	if (num1 < 0 || num2 < 0)
	{
		result = result * -1;
	}
	return (result);
}
