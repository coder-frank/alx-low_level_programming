#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints strings
 * @format: The format
*/
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int j = 0, start = 0;
	char *p;

	va_start(ap, format);
	while (format && format[j] != '\0')
	{
		switch (format[j])
		{ case 'c':
			switch (start)
			{case 1: printf(", "); }
			start = 1;
			printf("%c", va_arg(ap, int));
			break;
			case 'i':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			printf("%i", va_arg(ap, int));
			break;
		case 'f':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			printf("%f", va_arg(ap, double));
			break;
		case's':
			switch (start)
			{ case 1: printf(", "); }
			start = 1;
			p = va_arg(ap, char*);
			if (p)
			{ printf("%s", p);
			break; }
			printf("%p", p);
			break; }
		j++;
	}
	printf("\n");
	va_end(ap);
}
