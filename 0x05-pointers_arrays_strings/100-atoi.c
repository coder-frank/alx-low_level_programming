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
	int size = strlen(s);
	char *temp = (char *)malloc((size + 1) * sizeof(char)); // Allocate memory for temp

	int tempIndex = 0; // Index for storing digits in temp

	for (i = 0; i < size; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			temp[tempIndex] = s[i];
			tempIndex++;
		}
	}
	temp[tempIndex] = '\0'; // Add null terminator to make temp a valid string

	int result = atoi(temp);
	free(temp); // Free the allocated memory

	return result;
}
