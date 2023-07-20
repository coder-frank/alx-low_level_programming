#include <stdio.h>
#include <string.h>
#include <stdarg.h>

void print_all(const char * const format, ...)
{
    va_list ap;
    int i = 0;
    char c;

    va_start(ap, format);

    while (format && format[i] != '\0')
    {
        c = format[i];
        switch (c)
        {
        case 'c':
            if (i > 0)
                printf(", ");
            printf("%c", va_arg(ap, int));
            break;
        case 'i':
            if (i > 0)
                printf(", ");
            printf("%d", va_arg(ap, int));
            break;
        case 'f':
            if (i > 0)
                printf(", ");
            printf("%f", va_arg(ap, double));
            break;
        case 's':
            if (i > 0)
                printf(", ");
            char *s = va_arg(ap, char *);
            if (s == NULL)
                printf("(nil)");
            else
                printf("%s", s);
            break;
        default:
            break;
        }
        i++;
    }

    putchar('\n');
    va_end(ap);
}
