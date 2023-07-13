#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatinates two strings together based on the size
 * @n: The size
 * @s1: The first string
 * @s2: The second string
 * Return: The concatinated string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	concat = malloc(sizeof(char) * (len1 + n + 1));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (j = 0; j < n; j++)
		concat[i++] = s2[j];

	concat[i] = '\0';

	return (concat);
}
