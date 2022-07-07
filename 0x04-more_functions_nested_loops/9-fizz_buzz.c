#include "main.h"

/**
 * main -  that prints the numbers from 1 to 100, followed by a new line.
 * multiples of 3 prints Fizz
 * mutiples of 5 prints Buzz
 * multiples of both 3 and 5 prints FizzBuzz
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
		}
		else if	(i % 5 == 0)
		{
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else if (i == 100)
		{
			printf("Buzz");
		}
		else if ((i % 3 == 0 && i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
	}
	printf("\n");
	return (0);
}