#include <stdio.h>

/**
 * main - Entry point
 * variable c is declared of type char
 * the for loop is responsible for printing the alphabets
 * the if statement is responsivle for excluding letters q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
			putchar(c);
	}

	putchar('\n');
	return (0);
}
