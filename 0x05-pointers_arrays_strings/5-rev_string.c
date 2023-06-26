#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * rev_string - changes the order of a variable to a reverse order
 * @s: the variable passed
 */
void rev_string(char *s)
{
	int size;
	int i;
	int pos;
	char c[500];

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
