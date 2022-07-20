#include "main.h"

/**
 * frst_pal - gets the length of the string
 * @str: a string
 * @length: length variable
 *
 * Return: 1 (Success)
 */
int frst_pal(char *str, int length)
{
	int (*str == 0)
		return (length - 1);
	return (frst_pal(str + 1, length + 1));
}

/**
 * sec_pal - checks between a string and its reverse
 * @str: a string
 * @length: length variable
 *
 * Return: 1 (Success)
 */
int sec_pal(char *str, int length)
{
	if (*str == 0)
		return (1);
	else if (*str != *(str + 1))
		return (0);
	return (sec_pal(str + 1, length - 2));
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: a string
 *
 * Return: integer
 */
int is_palindrome(char *s)
{
	int length;

	length = frst_pal(s, 0);
	return (sec_pal(s, length));
}
