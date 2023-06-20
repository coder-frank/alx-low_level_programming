#include "main.h"

/**
 * main - Entry point of program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; ++letter)
	{
		__putchar(letter);
	}
	_putchar('\n');
}
