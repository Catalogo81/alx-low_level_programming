#include "main.h"

/**
 * print_last_digit -  prints the last digit of a number
 * @z: represents the last digit
 *
 * Returns: the last digit
 */
int print_last_digit(int x)
{
	int lstDigit;

	if (x < 0)
		x = -x;

	lstDigit = x % 10;
	_putchar('0' + lstDigit);
	_putchar('\n');
	return (0);
}
