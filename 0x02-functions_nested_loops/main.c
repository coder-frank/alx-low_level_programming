#include <stdio.h>
#include "main.h"  // Include the header file

int _putchar(char c)
{
    // Print the character
    putchar(c);

    // Return the character as an integer
    return c;
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
