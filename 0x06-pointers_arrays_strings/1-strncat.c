#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strncat - concatinates two strings together
 * @dest: The destination to be concatinated
 * @src: The source to be concatinated
 * @n: The source to be concatinated
 * Return: The destination variable
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len;
	int i;

	dest_len = strlen(dest);
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
	return (dest);
}
