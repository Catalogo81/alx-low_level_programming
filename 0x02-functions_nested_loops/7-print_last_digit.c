#include "main.h"

/**
 * print_last_digit -  prints the last digit of a number
 * @x: represents the number
 *
 * Return: d, the last digit
 */
int print_last_digit(int x)
{
	int d;

	d (x % 10);

	if (d < 0)
		d = (-1 * d);

	_putchar(d + '0');
	return (d);
	_putchar('\n');
}
