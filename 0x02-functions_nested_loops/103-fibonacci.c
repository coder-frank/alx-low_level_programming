#include <stdio.h>

/**
* fib - Prints fibonacci numbers of 50
* main - Executes all code
* Return: Always 0.
*/
void fib(void)
{
	int i;
	unsigned long f = 1;
	unsigned long s = 2;
	unsigned long r;
	unsigned long sum;

	for (i = 1; i <= 4000000; i++)
	{
		if (i % 2 == 0)
		{
			sum += r;
		}
		r = f + s;
	}
	printf("%lu\n", sum);
}
/**
* main - Executes the fib
* Return: Always 0
*/
int main(void)
{
	fib();
	return (0);
}
