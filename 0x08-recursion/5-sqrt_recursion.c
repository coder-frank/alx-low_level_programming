#include <stdio.h>
#include <math.h>
#include "main.h"
/**
 * _sqrt_recursion - Calculates the square root
 * @n: The number to be used
 * Return: The result of the function
*/
int _sqrt_recursion(int n)
{
	int root;

	root = sqrt(n);
	if (root * root == n)
		return (root);
	else
		return (-1);
}
