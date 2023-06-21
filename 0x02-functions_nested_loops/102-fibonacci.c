#include <stdio.h>

/**
* fib - Prints fibonacci numbers of 50
*
* Return: Always 0.
*/
void fib(void)
{
	int i;
	unsigned long f = 1;
	unsigned long s = 2;
	unsigned long r;

	for (i = 0; i <= 47; i++)
	{
		if (i != 0)
		{
			printf(" ");
		}

		if (i == 0)
		{
			printf("%lu, %lu, ", f, s);
		}
		
		if (i == 47)
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

int main(void)
{
	fib();
	return (0);
}
