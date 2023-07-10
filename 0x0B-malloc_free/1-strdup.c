#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - copies a string
 * @str: String to be copied
 * Return: The Copy of the string
*/
char *_strdup(char *str)
{
	char *result;
	int size;

	size = strlen(str);
	result = malloc(size);
	if (result == NULL)
		return (NULL);

	strcpy(result, str);
	return (result);

}
