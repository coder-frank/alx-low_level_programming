#include <stdio.h>
#include "main.h"
/**
 * swap_int - swaps the value of the first and second integer
 * @a: The first integer passed
 * @b: The second integer passed
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
