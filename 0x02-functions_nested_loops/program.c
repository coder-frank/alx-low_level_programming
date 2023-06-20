#include "main.h"

int main(void)
{
	int r;

	r = print_sign(98);
	_putchar(r + '0');
	r = print_sign(0);
	_putchar(r + '0');
	r = print_sign(0xff);
	_putchar(r + '0');
	r = print_sign(-1);
	_putchar(r + '0');
	return (0);
}
