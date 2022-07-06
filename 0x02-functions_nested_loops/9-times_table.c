#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		
		int j;
		for (j = 1; j < 10; j++)
		{
			int x = (i * j);
			if ((x / 10) > 0)
				_putchar((x /10) + '0');
			else
				_putchar(');

			_putchar((x % 10) + '0');

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
