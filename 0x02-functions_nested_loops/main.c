#include <stdio.h>
#include "main.h"  // Include the header file

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
