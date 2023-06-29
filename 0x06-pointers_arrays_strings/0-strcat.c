#include <stdio.h>
#include "main.h"
/**
 * swap_int - swaps the value of the first and second integer
 * @dest: The destination to be concatinated
 * @src: The source to be concatinated
 */
char *_strcat(char *dest, char *src)
{
    int length1 = strlen(dest);
    int length2 = strlen(src);
    int i, k;

    for (i = 0; i < length2; i++)
    {
        dest[length1 + i] = src[i];
    }
    dest[length1 + length2] = '\0';

    return dest;
}
