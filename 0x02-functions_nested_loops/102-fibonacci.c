#include <stdio.h>

/**
* fib - Prints fibonacci numbers of 50
*
* Return: Always 0.
*/
void fib(void)
{
  int i;
  int f;
  int s;
  int r;

	f = 1;
	s = 2
	for (i = 0; i < 50; i++)
	{
		if (i == 0)
		{
			printf("%d, %d, ", f, s);
			continue;
		}
		r = f + s;
		printf("%d, ", r);
		f = s;
		s = r;
    }
}

int main(void)
{
	fib();
	return (0);
}
