#include <stdio.h>

/**
* fib - Prints fibonacci numbers of 50
*
* Return: Always 0.
*/
void fib(void)
{
	int i;
	unsigned long int f = 1;
	unsigned long int s = 2;
	unsigned long int r;

	for (i = 0; i < 50; i++)
	{
		if (i != 0 && != 49)
		{
			printf(",");
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
