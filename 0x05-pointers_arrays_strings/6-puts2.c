#include <stdio.h>
#include <stdlib.h>
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
	char *tempC;
	int temp;

	size = strlen(s);
	for (i = 0; i < size; i++)
	{
		tempC = &s[i];
		temp = *tempC - '0';

		if (temp % 2 == 0)
			printf("%d", temp);
	}
	printf("\n");
}
