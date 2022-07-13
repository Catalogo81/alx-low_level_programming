#include "main.h"

/**
 * *cap_string - a function that capitalizes all words of a string
 * @s: the string
 *
 * Return: char
 */
char *cap_string(char *s)
{
	int i, a = 0;
	int length = 13;
	char spc[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	while (s[a])
	{
		i = 0;

		while (i < length)
		{
			if ((a == 0 || s[a - 1] == spc[i]) && (s[a] >= 97 && s[a] <= 122))
			{
				s[a] -= 32;
			}
			i++;
		}
		a++;
	}
	return (s);
}
