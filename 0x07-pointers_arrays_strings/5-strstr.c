#include "main.h"
#include <string.h>
/**
 * _strstr - locates a substring
 * @haystack: pointer to the string to search within
 * @needle: pointer to the substring to locate
 *
 * Return: A pointer to the beginning of the located substring in haystack,
 *         or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
