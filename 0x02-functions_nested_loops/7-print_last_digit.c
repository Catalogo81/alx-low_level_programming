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

	if (x < 0)
		x = -x;

	d = x % 10;
	_putchar('0' + d);
	return (d);
	_putchar('\n');
}
