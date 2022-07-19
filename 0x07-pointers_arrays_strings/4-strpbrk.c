#include "main.h"

/**
 * *_strpbrk - a function that searches a string for any of a set of bytes
 * @s: char
 * @accept: char
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept
 * NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i])
	{
		j - 0;

		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				s += i;
				return (s);
			}
			j++;
		}
		i++;
	}
	return ('\0');
}
