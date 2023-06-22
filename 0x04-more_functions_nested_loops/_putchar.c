#include <unistd.h>
#include "main.h"
/**
 * _putchar - prints out any character passed to it
 * @c: The character being passed
 */
void _putchar(char c)
{
	return (write(1, &c, 1));
}
