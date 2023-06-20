#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Return: Always 0 (Success)
 */
void print_last_digit(int n)
{
	int last;

	last = n % 10;
	printf("%d");
	return (last);
}

int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	putchar(r + '0');
	putchar('\n');
	return (0);
}
