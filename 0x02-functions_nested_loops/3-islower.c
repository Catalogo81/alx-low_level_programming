#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: is the character used for checking
 *
 * Returns: 1 if c is lowercase, and 0 if not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

	_putchar('\n');

}
