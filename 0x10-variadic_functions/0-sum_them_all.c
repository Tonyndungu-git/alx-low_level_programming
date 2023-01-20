#include "variadac_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of parameters
 * Return: Sum of all parameters
 */


int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);

	unsigned int i;
	int sum;

	i = 0;
	sum = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{

		sum += va_arg(args, int);
		i++;
	}

	va_end(args);
	return (sum);


}
