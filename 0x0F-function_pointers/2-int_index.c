#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - prints the array with the functioon
 * @array: The array to be used
 * @size: The size of the array
 * @cmp: The function to be used
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
