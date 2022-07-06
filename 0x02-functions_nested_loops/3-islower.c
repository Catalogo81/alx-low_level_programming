#include "main.h"

/**
 * _islower - checks for lowercase character
 * uses variable c for checking
 *
 * Returns: 1 if c is lowercase, and 0 if not
 */
int _islower(int c)
{
	int c;

	if(islower(c))
		return (1);
	else
		return (0);

	_putchar('\n');

}
