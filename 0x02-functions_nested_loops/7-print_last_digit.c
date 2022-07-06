#include "main.h"

/**
 * print_last_digit -  prints the last digit of a number
 * @n: represents the number, d represents the last digit
 *
 * Return: d, the last digit
 */
int print_last_digit(int n)
{
	int d;

	d = (n % 10);

	if (d < 0)
		d = (-1 * d);

	_putchar(d + '0');
	return (d);
	_putchar('\n');
}
