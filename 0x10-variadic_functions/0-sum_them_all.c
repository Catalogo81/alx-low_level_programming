#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number
 *
 * Return: 0 (Success)
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list v_list;

	if (n == 0)
		return (0);

	va_start(v_list, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(v_list, const unsigned int);
	}
	va_end(v_list);

	return (sum);
}
