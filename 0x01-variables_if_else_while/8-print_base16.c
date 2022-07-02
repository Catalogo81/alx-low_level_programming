#include <stdio.h>

/**
 * main - Entry point
 * variable c is declared of type char
 * for loop iterates the numbers of base 16
 * another for the hexadecimal string
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}

	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}
