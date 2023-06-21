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
	unsigned long sum = 0;

	while (f <= 4000000)
	{
		if (f % 2 == 0)
		{
			sum += f;
		}
		r = f + s;
		f = s;
		s = r;
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
