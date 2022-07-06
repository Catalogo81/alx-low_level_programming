#include "main.h"

/**
 * _isalpha: cecks for alphabetic character
 * @c: is used as the character that checks
 *
 * Return: 1 if c is a letter,lowercase or uppercase, o if not
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		if (c >= 'A' && c <= 'Z')
			return (1);
	}
	
	return (0);

	_putchar('\n');
}
