#include "main.h"
#include <string.h>

/**
 * *_strncat - a function that concatenates two strings
 * @dest: is the destination variable
 * @src: is the source cariable
 * @n: number parameter
 *
 * Return: a pointer of string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
