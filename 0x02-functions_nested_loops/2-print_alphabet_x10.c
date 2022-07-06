#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 * 10 times followed by a new line
 *
 * Return: void
 */
void print_alphabet(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}

		i++;

	}
}
