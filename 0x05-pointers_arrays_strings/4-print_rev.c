#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string pointer
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i, strLength = 0;

	while (s[strLength] != '\0')
	{
		strLength++;
	}

	strLength = strlen(s);
	for (i = strLength - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
