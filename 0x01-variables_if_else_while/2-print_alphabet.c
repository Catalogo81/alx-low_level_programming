#include <stdio.h>

/**
 * main- Entry point 
 * declare the c variable as a char
 * uses a for loop to iterate through the alphabet from a-z
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	putchar('\n');
	return (0);
}
