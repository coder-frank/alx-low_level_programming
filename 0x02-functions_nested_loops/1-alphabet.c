#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of program
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; ++letter)
	{
		putchar(letter);
	}
}

int main(void)
{
	print_alphabet();
	return (0);
}
