#include "main.h"

/**
 * print_alphabet - Entry point
 * prints the alphabet, in lowercase
 *
 * Returns: void
 */
void print_alphabet(void)
{
	for (int i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
