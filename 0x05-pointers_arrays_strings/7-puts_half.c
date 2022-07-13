#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: is the string pointer
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, s1, s2;
	int half = 2;

	s1 = strlen(str);
	if (s1 % half == 1)
		s2 = s1 / half + 1;
	else
		s2 = s1 / 2;
	for (i = s2; i < s1; i++)
		_putchar(str[1]);
	_putchar('\n');
}
