#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the square matrix
 * @size: size of the square matrix
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	/* Calculate the sum of the first diagonal */
	for (i = 0; i < size; i++)
	{
		sum1 += a[(size + 1) * i];
	}

	/* Calculate the sum of the second diagonal */
	for (i = 0; i < size; i++)
	{
		sum2 += a[(size - 1) * (i + 1)];
	}

	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
