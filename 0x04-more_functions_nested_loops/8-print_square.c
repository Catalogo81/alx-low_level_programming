#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: is the size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		_putchar('#');
		for (j = 1; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n);
	}
}
