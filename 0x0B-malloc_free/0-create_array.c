#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars
 * @size: is the size of the character
 * @c: is the character
 *
 * Return: Null if size = 0, Null if fail
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if (size == 0)
	{
		return (NULL);
	}
	str = malloc(size * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
