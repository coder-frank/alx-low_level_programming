#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: The size of the memory
 * Return: A pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	if (malloc(b) == NULL)
		printf("98");
}