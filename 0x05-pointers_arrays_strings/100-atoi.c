#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * _atoi - convert string to number
 * @s: the string to be passed
 * Return: The integer conversion
 */
int _atoi(char *s)
{
	int i;
	int result;
	int isN = 0;
	int size = strlen(s);
	char *temp = (char *)malloc((size + 1) * sizeof(char));

	int tempIndex = 0;

	for (i = 0; i < size; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			if (s[i - 1] == '-')
				isN = 1;
			temp[tempIndex] = s[i];
			tempIndex++;

			if (s[i + 1] == ' ')
			{
				if (s[i - 3] == ' ')
					isN = 0;
				break;
			}
		}
	}
	temp[tempIndex] = '\0';

	result = atoi(temp);
	free(temp);
	if (isN == 1)
		result *= -1;
	return result;
}
