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
	unsigned int i = 0, j, k = 0, byte = 32;

	while (accept[i])
	{
		j = 0;

		while (s[j] != byte)
		{
			if (accept[i] == s[j])
			{
				k++;
			}
			j++
		}
		i++;
	}

	return (k);
}
