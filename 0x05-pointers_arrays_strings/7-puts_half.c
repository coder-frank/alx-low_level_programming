#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * puts_half - prints half of a string
 * @s: the string passed
 */
void puts_half(char *s)
{
	int size;
	int i;
	int n;

	size = strlen(s);
	if (size % 2 == 0)
	{
		for (i = size / 2; i < size; i++)
			printf("%c", s[i]);
	} else
	{
		n = (size - 1) / 2;
		for (i = n + 1; i < size; i++)
			printf("%c", s[i]);
	}
	printf("\n");
}
