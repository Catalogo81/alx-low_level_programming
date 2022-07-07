#include <stdio.h>

/**
 * main -  finds and prints the largest prime factor of a number
 *
 * Return: 0 (Succes)
 */
int main(void)
{
	long n, i;

	n = 612852475143;

	for (i = 2; i < n; i++)
	{
		while (n % i == 0)
		{
			n = n / i;
		}
	}
	printf("%lu", i);
	_putchar('\n');
	return (0);
}
