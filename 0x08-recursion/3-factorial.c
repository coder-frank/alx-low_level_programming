#include <stdio.h>
#include "main.h"
/**
 * factorial - prints out the factorial of a number
 * @n: The number to be used
 * Return: The length of the string
*/
int factorial(int n)
{
	int i;
	int result;

	result = 1;
	if (n < 0)
		return (-1);

	for (i = n; i > 0; i--)
	{
		result *= i;
	}

	return (result);
}
