#include "main.h"
#include <string.h>

/**
 * *_strncpy - a function that copies a string
 * @dest: destination variable
 * @src: source variable
 * @n: number variable
 *
 * Return: pointer resulting dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (src[j])
	{
		j++;
	}

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
