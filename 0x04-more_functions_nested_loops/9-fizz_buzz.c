#include <stdio.h>
/**
 * fizz_buzz - prints fizz, buzz or
 * fizz buzz for multiples of 3, 5 or both respectively
 */
void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("Fizz Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		} else if (i % 5 == 0)
		{
			printf("Buzz ");
		} else
		{
			printf("%d ", i);
		}
	}
	putchar('\n');
}
/**
 * main - Entry point of program
 * Return: Always 0 (Success)
 */

int main(void)
{
	fizz_buzz();
	return (0);
}
