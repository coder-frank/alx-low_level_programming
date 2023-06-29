#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: The destination to be copied
 * @src: The source to be copied
 * @n: The source to be concatinated
 * Return: The copied variable
 */
char *_strncpy(char *dest, char *src, int n)
{
	int dest_len;
	int i;

	dest_len = strlen(dest);
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
