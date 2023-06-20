#include <stdio.h>

/**
 * main - Entry of the program
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; ++letter)
		{
			putchar(letter);
		}
	}
}

int main(void)
{
	print_alphabet_x10();
	return (0);
}
