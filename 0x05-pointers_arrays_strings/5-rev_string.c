#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_rev - prints out a reverse order of a variable
 * @s: the variable passed
 */
void rev_string(char *s)
{
	int size;
	int i;
	char c[10];
	int pos;

	pos = 0;
	size = strlen(s);
	for (i = size - 1; i >= 0; i--)
	{
		c[pos] = s[i];
		pos++;
	}

	for (i = 0; i < size; i++)
	{
		s[i] = c[i];
	}
}
