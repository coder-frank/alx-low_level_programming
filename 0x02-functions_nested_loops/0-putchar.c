#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char message[10] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
		_putchar(message[i]);
	return (0);
}
