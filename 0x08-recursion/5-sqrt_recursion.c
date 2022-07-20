#include "main.h"

int _sqrt(int, int);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number variable
 *
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - recursion square root of a number.
 * @n: the number variable
 * @i: the iterator variable
 *
 * Return: If n does not have a natural square root, return -1
 */
int _sqrt(int n, int i)
{
	int sqr = i * i;

	if (sqr > n)
		return (-1);
	if (sqr == n)
		return (i);
	return (_sqrt(n, i + 1));
}
