#include <stdio.h>

/**
 * main - Entry point
 * variable s ist declared
 * for loop iterates for all possible combinations of a single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char s;

	for (s = '0'; s <= '9'; s++)
	{
		putchar(s);

		if (s != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
