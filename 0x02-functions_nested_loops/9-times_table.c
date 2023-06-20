#include <stdio.h>

/**
 * main - Entry of the program
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int i;
	int j;
	int result;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			result = i * j;
			printf("%d", result);
			if (j != 9)
				printf(", ");
		}
		printf("\n");
	}
}

int main(void)
{
	times_table();
	return (0);
}