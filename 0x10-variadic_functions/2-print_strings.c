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
		if (separator != NULL && i != 0)
			printf("%s", separator);
	
		char *string = va_arg(ap, char *);

		printf("%s", (string == NULL) ? "nil" : string);

	}
	printf('\n');
	va_end(ap);
}
