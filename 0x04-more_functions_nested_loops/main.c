#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;
	int result;

	c = 'A';
	result = _isupper(c);
	printf("%c: %d\n", c, result);
	result = _isupper(c);
	c = 'a';
	printf("%c: %d\n", c, result);
	return (0);
}
