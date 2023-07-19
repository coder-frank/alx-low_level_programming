#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - prints the array position
 * @array: The array to be used
 * @size: The size of the array
 * @cmp: The function to be used
 * Return: the position of array if all checks pass
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
