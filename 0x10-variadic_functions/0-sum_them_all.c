#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - sums up all the parameter
 * @n: The parameters to be added
 * Return: The sumed value
*/
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return 0;
	va_list ap;
	int i, sum;

	va_start(ap, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		int num = va_arg(ap, int);

		if (num < 0)
			sum -= -num;
		else
			sum += num;
	}
	va_end(ap);
	return (sum);
}
