#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * puts2 - prints out the even numbers of a string
 * @s: the string passed
 */
void puts2(char *s)
{
	int size;
	int i;

	size = strlen(s);
	for (i = 0; i < size; i++)
	{
		if (i % 2 == 0)
			printf("%c", s[i]);
	}
	printf("\n");
}
