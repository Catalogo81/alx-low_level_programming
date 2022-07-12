#include "main.h"
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: the string pointer
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int length;

	while (*s != '\0')
	{
		length += 1;
		*s = *s + 1;
	}
	return (length);
}
