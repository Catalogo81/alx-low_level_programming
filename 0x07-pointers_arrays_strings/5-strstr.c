#include "main.h"

/**
 * *_strstr - a function that locates a substring
 * @haystack: char string
 * @needle: char string
 *
 * Return:  a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j;

	while (haystack[i])
	{
		j = 0;

		while (needle[j])
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
			j++;
		}

		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
		i++
	}
	return ('\0');
}
