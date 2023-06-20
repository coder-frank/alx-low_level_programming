#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of program
 *
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
	int r;

	r = abs(n);
	return (r);
}

int main(void)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);
	return (0);
}
