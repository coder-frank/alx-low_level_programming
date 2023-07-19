#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - prints the array with the functioon
 * @array: The array to be used
 * @size: The size of the array
 * @action: The function to be used
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
