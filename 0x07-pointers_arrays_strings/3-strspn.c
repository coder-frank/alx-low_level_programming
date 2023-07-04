#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string to search
 * @accept: pointer to the string containing the characters to accept
 *
 * Return: The number of bytes in the initial segment of s
 *	consisting only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
