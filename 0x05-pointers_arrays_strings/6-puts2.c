#include "main.h"

/**
 * puts2 - prints other character of a string, starting with the 1st character
 * @str: string pointer
 *
 * Return: void
 */
void puts2(char *str)
{
	int i, length;

	length = strlen(str);
	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
