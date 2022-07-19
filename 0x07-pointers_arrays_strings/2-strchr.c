#include "main.h"

/**
 * *_strchr - a function that locates a character in a string
 * @s: string characters
 * @c: char
 *
 * Return: a pointer to the first occurrence of the character c in the string s
 * Null if none found
 */
char *_strchr(char *s, char c)
{
	int i = 0, j;

	while (s[i])
	{
		i++;
	}

	for (j = 0; j <= i; b++)
	{
		if (c == s[j])
		{
			s += j;
			return (s);
		}
	}
	return ('\0');
}
