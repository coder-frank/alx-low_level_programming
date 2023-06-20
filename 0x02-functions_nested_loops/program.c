#include "main.h"

int main(void)
{
	int r;

	r = print_sign(98);
	putchar(r + '0');
	r = print_sign(0);
	putchar(r + '0');
	r = print_sign(0xff);
	putchar(r + '0');
	r = print_sign(-1);
	putchar(r + '0');
	return (0);
}
