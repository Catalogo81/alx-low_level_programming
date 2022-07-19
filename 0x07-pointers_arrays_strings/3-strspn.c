#include "mian.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: string
 * @accept: char
 *
 * Return: number of bytes in s from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, k = 0;

	while (*s)
	{
		i = 0;

		while (accept[i])
		{
			if (*s == accept[i])
			{
				k++;
				break;
			}
			else if (accept[i + 1 == '\0')
			{
				return (k);
			}
		}
		s++;
	}
	return (k);
}
