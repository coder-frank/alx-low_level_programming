#include <stdio.h>
#include <math.h>
#include "main.h"
/**
 * _pow_recursion - raise the power of y to x
 * @x: The number to be used
 * @y: The power to be used
 * Return: The result of the function
*/
int _pow_recursion(int x, int y)
{
	int result;

	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
