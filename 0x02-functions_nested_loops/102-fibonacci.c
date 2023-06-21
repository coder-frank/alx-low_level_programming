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

	for (i = 0; i <= 49; i++)
	{
		if (i != 0 && i != 49)
		{
			printf(",");
		}

		if (i == 0)
		{
			printf("%lu, %lu, ", f, s);
			
		}
		r = f + s;
		printf("%lu ", r);
		f = s;
		s = r;
	}
}

int main(void)
{
	fib();
	return (0);
}
