#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: is used as the character that checks
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

	_putchar('\n');
}
