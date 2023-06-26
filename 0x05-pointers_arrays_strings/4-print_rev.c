#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_rev - prints out a reverse order of a variable
 * @s: the variable passed
 */
void print_rev(char *s)
{
	int size;
	int i;

	size = strlen(s);
	for (i = size - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
