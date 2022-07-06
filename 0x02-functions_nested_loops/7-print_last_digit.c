#include "main.h"

/**
 * print_last_digit -  prints the last digit of a number
 * @d: represents the last digit
 * @x: represents the number
 *
 * Returns: the last digit
 */
int print_last_digit(int x)
{
	int d;

	if (x < 0)
		x = -x;

	d = x % 10;
	_putchar(d + '0');
	return (d);
	_putchar('\n');
}
