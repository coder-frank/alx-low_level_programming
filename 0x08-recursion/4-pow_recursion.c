#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - raise the power of y to x
 * @x: The number to be used
 * @y: The power to be used
 * Return: The result of the function
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	return (pow(x, y));
}
