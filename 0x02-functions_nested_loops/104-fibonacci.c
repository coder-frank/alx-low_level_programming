#include <stdio.h>
#include <gmp.h>
/**
* fib - Prints fibonacci numbers of 50
* main - Executes all code
* Return: Always 0.
*/
void fib(void)
{
	int i;
	mpz_t f, s, r;
	mpz_init(f);
	mpz_init(s);
	mpz_init(r);
	mpz_set_ui(f, 1);
	mpz_set_ui(s, 2);

	for (i = 1; i <= 96; i++)
	{
		if (i != 0)
		{
			printf(" ");
		}

		if (i == 0)
		{
			gmp_printf("%Zd, %Zd, ", f, s);
		}
		if (i == 96)
		{
			mpz_add(r, f, s);
			gmp_printf("%Zd\n", r);
			break;
		}
		mpz_add(r, f, s);
		gmp_printf("%Zd,", r);
		mpz_set(f, s);
		mpz_set(s, r);
	}
	mpz_clear(f);
	mpz_clear(s);
	mpz_clear(r);
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
