#include <stdio.h>
#include "main.h"
/**
 * factorial - prints out the factorial of a number
 * @n: The number to be used
 * Return: The Factorial of the number
*/
int factorial(int n)
{
	int result;

	if (n < 0)
		result = -1;
	else if (n == 1)
		result = 1;
	else
		result = n*= factorial(n-1);

	return (result);
}
