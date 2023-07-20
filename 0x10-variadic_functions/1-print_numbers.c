#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers
 * @n: The number of parameters
 * @separator: The separator
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		int num = va_arg(ap, int);

		if (separator == NULL)
			continue;
		else if (i == (n - 1))
			printf("%d", num);
		else
			printf("%d%s", num, separator);
	}
	va_end(ap);
}
