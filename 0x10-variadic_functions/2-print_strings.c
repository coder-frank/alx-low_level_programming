#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings
 * @n: The number of parameters
 * @separator: The separator
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		char *string = va_arg(ap, char *);

		if (string == NULL)
			printf("nil");
		else
			printf("%s", string);

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	putchar('\n');
	va_end(ap);
}
