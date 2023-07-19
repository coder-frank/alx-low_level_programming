#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - prints the array with the functioon
 * @array: The array to be used
 * @size: The size of the array
 * @action: The function to be used
 * Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
