#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * swap_int - swaps the value of the first and second integer
 * @dest: The destination to be concatinated
 * @src: The source to be concatinated
 * Return: The destination variable
 */
char *_strcat(char *dest, char *src)
{
	int length1;
	int length2;
	int i, k;

	length1 = strlen(dest);
	length2 = strlen(src);

	for (i = 0; i < length2; i++)
	{
		dest[length1 + i] = src[i];
	}
	dest[length1 + length2] = '\0';

	return (dest);
}
