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
	char *ptr;
	char *vir;
	int i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n >= strlen(s2))
	{
		ptr = malloc(strlen(s1) + strlen(s2) + 1);
		if (ptr == NULL)
			return (NULL);
		strcpy(ptr, s1);
		strcat(ptr, s2);
	} else
	{
		ptr = malloc(strlen(s1) + n + 1);
		if (ptr == NULL)
			return (NULL);
		strcpy(ptr, s1);
		vir = malloc(n + 1);
		if (vir == NULL)
		{
			free(ptr);
			return (NULL);
		}
		for (i = 0; i < n; i++)
		{
			vir[i] = s2[i];
		}
		vir[n] = '\0';
		strcat(ptr, vir);
		free(vir);
	}

	return (ptr);
}
