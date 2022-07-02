#include <stdio.h>

/**
 * main - Entry point
 * variable n of type int is declared
 * for loop for iterating numbers 1-9
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for( n = '0'; n <= '9'; n++)
		putchar(n);

	putchar('\n');
	return(0);
}
