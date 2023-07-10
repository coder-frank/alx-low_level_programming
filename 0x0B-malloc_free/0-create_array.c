#include "main.h"
/**
 * create_array - creates an array of a particular size
 * @size: Size of the array
 * @c: Character to be used in the array
*/
char *create_array(unsigned int size, char c)
{
	char *result;
	int i;

	if (size == 0)
	{
		return (NULL);
	} else
	{
		result = malloc(size);
		for (i = 0; i < size; i++)
		{
			result[i] = c;
		}
		return result;
	}
	
}
