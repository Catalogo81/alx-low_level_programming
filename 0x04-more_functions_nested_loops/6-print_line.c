#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: is the input number from user
 *
 * Return: character '_' representing the input number from user
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
