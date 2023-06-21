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

	for (i = 0; i <= 93; i++)
	{
		if (i != 0)
		{
			printf(" ");
		}

		if (i == 0)
		{
			printf("%lu, %lu, ", f, s);
		}
		if (i == 93)
		{
			r = f + s;
			printf("%lu\n", r);
			break;
		}
		r = f + s;
		printf("%lu,", r);
		f = s;
		s = r;
	}
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
