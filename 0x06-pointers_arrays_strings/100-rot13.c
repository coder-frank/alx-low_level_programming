#include "main.h"

/**
* rot13 - encodes a string using ROT13
* @str: the string to encode
*
* Return: pointer to the encoded string
*/
char *rot13(char *str)
{
	char *alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot13_chars = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (str[i] == alpha[j])
			{
				str[i] = rot13_chars[j];
				break;
			}
		}
	}

	return (str);
}
