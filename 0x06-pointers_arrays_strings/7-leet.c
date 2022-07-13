#include "main.h"

/**
 * *leet - a function that encodes a string into 1337
 * @s: string variable
 *
 * Return: char
 */
char *leet(char *s)
{
	int length = 5, a = 0, b;
	char l[5] = {'A', 'E', 'O', 'T', 'L'};
	char n[5] = {'4', '3', '0', '7', '1'};

	while (s[a])
	{
		b = 0;

		while (b < length)
		{
			if (s[a] == l[b] || s[a] - 32 == l[b])
			{
				s[a] = n[b];
			}

			b++;
		}
		a++;
	}
	return (s);
}
