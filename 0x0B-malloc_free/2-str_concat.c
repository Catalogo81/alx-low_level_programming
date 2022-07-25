#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: a combined string, NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int length = 0, i = 0, j = 0, k = 0;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	length = i + j;
	str = (char *)malloc(length * sizeof(char) + 1);
	j = 0;
	if (str == NULL)
		return (NULL);
	while (k < length)
	{
		if (k < i)
		{
			str[k] = s1[k];
		}
		if (k >= i)
		{
			str[k] = s2[j];
			j++;
		}
		k++;
	}
	str[k] = '\0';
	return (str);
}
