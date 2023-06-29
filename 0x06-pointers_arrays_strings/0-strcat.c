#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strcat - concatinates two strings together
 * @dest: The destination to be concatinated
 * @src: The source to be concatinated
 * Return: The destination variable
 */
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
