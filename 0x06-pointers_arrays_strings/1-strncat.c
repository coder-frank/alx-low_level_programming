#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strncat - concatinates two strings together
 * @dest: The destination to be concatinated
 * @src: The source to be concatinated
 * Return: The destination variable
 */
char *_strncat(char *dest, char *src, int n)
{
	strcat(dest, src);
	return (dest);
}
