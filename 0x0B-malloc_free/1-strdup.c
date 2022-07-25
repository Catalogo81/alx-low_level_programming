#include "main.h"

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: string string parameter
 *
 * Return: Null is str = NULL, and NULL if insufficient memory
 */
char *_strdup(char *str)
{
	int i, j;
	char *c;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 1;
	while (str[i])
	{
		i++;
	}
	c = (char *)malloc(i * sizeof(char) + 1);
	if (c == NULL)
	{
		return (NULL);
	}
	j = 0;
	while (j < i)
	{
		c[j] = str[j];
		j++;
	}
	c[j] = '\0';
	return (c);
}
