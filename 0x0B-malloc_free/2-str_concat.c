#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - copies a string
 * @s1: String to be concat
 * @s2: Second string
 * Return: The Concatinated string
*/
char *str_concat(char *s1, char *s2)
{
	char *result;
	int size1;
	int size2;
	int total;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	size1 = strlen(s1);
	size2 = strlen(s2);
	total = size1 + size2 + 1;
	result = malloc(total);
	if (result == NULL)
		return (NULL);

	strcat(result, s1);
	strcat(result, s2);
	return (result);

}
