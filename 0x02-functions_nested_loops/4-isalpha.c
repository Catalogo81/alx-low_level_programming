#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: is used as the character that checks
 *
 * Return: 1 if c is a letter,lowercase or uppercase, o if not
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

	_putchar('\n');
}
