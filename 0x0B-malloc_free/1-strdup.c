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

	if (str == NULL)
		return (NULL);
	size = strlen(str);
	result = malloc(size + 1);
	if (result == NULL)
		return (NULL);

	strcpy(result, str);
	return (result);

}
