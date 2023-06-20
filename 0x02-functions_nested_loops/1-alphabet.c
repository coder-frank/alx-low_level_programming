#include "main.h"

/**
 * main - Entry point of program
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void);

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
		_putchar(letter);
	}
	_putchar('\n');
}
