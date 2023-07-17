#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees the dog structure
 * @d: The dog structure to be freed
 *
 * Return: The freed dog structure
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
