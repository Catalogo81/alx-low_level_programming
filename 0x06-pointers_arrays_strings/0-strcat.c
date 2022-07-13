#include "main.h"
#include <stdio.h>

/**
 * *_strcat - a function that concatenates two strings
 * @dest: is the variable used to store destination
 * @src: is variable or the source
 *
 * Return: pointer to restulting string 'dest'
 */
char *_strcat(char *dest, char *src)
{
	int i, length = 0;

	while (dest[length])
	{
		length++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[length] = src[i];
		length++;
	}
	dest[length] = '\0';
	return (dest);
}
