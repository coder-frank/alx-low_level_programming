#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of a particular size
 * @size: Size of the array
 * @c: Character to be used in the array
 * Return: The address of the array
*/
char *create_array(unsigned int size, char c)
{
	char *result;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	result = malloc(size);
	if (result == NULL)
		return NULL;

	for (i = 0; i < size; i++)
	{
		result[i] = c;
	}
	return (result);

}
