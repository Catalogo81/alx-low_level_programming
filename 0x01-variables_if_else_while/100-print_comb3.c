#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int s;
	int i;

	for(s = '0'; i <= '9'; i++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			
			if (s < i)
			{
				putchar(s);
				putchar(i);

				if (s != '8' || (s == '8' && i != '9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
