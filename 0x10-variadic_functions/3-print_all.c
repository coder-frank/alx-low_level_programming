#include <stdio.h>
#include <string.h>
#include <stdarg.h>

void print_all(const char * const format, ...)
{
	va_list ap;
	int i, count = 0;
	char *s;
	char c;
	char allowed[4];

	i = 0;
	while (format[i] != '\0')
	{
		if (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's')
		{
			allowed[count] = format[i];
			count++;
		}
		i++;
	}

	i = 0;
	
	va_start(ap, format);
	while (i < count)
	{
		c = allowed[i];
		switch (c)
        {
        case 'c':
            printf("%c", va_arg(ap, int));
            break;
        case 'i':
            printf("%d", va_arg(ap, int));
            break;
        case 'f':
            printf("%f", va_arg(ap, double));
            break;
        case 's':
            s = va_arg(ap, char *);
            if (s == NULL)
                printf("(nil)");
            else
                printf("%s", s);
            break;
        default:
            break;
        }

		if (i < count - 1)
			printf(", ");
		i++;
	}
	
	putchar('\n');
	va_end(ap);
}