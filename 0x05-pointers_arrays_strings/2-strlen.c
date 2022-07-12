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
	int i = 1, length = 0;
	char pointerLength = s[0];

	while (pointerLength != '\0')
	{
		length += 1;
		pointerLength = s[i++];
	}
	return (length);
}
