#include <stdio.h>

/**
 * main - Entry point
 * declraed variable c of type char
 * for loop to iterate the alfabet in small letters then capital leterrs after
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
