#include <stdio.h>

/**
 * main -  finds and prints the largest prime factor of the number 612852475143
 *
 * Return: 0 (Succes)
 */
int main(void)
{
	long int n, divNumber = 2, result = 0, largestFact;

	n = 612852475143;

	while (n != 0)
	{
		if (n % divNumber != 0)
		{
			divNumber += 1;
		}
		else
		{
			largestFact = n;
			n = n / divNumber;
			if (n == 1)
			{
				printf("%d", largestFact);
				result = 1;
				break;
			}
		}
	}
	_putchar('\n');
	return (0);
}
