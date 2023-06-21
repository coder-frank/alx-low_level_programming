#include <stdio.h>
/**
* fib - Prints fibonacci numbers of 50
* main - Executes all code
* Return: Always 0.
*/
void fib(void)
{
	int i;
	unsigned long f, s, r;
	f = 1;
	s = 2;

	for (i = 1; i <= 96; i++)
	{
		if (i != 0)
		{
			printf(" ");
		}

		if (i == 0)
		{
			printf("%llu, %llu, ", f, s);
		}
		if (i == 96)
		{
			mpz_add(r, f, s);
			printf("%llu\n", r);
			break;
		}
		r = f + s;
		printf("%d,", r);
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
