#include <stdio.h>

/**
* fib - Prints fibonacci numbers of 50
*
* Return: Always 0.
*/
void fib(void)
{
  int i;
  unsigned long long f = 1;
  unsigned long long s = 2;
  unsigned long long r;

	for (i = 0; i < 50; i++)
	{
		if (i == 0)
		{
			printf("%llu, %llu, ", f, s);
			continue;
		}
		r = f + s;
		printf("%llu, ", r);
		f = s;
		s = r;
    }
}

int main(void)
{
	fib();
	return (0);
}
