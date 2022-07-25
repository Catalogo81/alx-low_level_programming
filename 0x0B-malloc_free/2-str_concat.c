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
	int length = 0, i, j, k;
	char *str;

	if (s1 == NULL || s2 == NULL)
	{
		return ("");
	}
	i = 0;
	while (s1[i])
	{
		i++;
	}
	j = 0;
	while (s2[j])
	{
		j++;
	}
	length = i + j;
	if (str == NULL)
		return (NULL);
	str = (char *)malloc(length * sizeof(char) + 1);
	j = 0;
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
