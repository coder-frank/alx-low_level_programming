#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (letter = 'a'; letter <= 'z'; ++letter) {
        putchar(letter);
    }
   for (letter = 'A'; letter <= 'Z'; ++letter) {
        putchar(letter);
    }
    putchar('\n');
	
	return (0);
}
