#include <stdio.h>

/**
 *  print_alphabet_x10 - prints the alphabet (10 times), followed by a new line
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
		putchar('\n');
	}
}
