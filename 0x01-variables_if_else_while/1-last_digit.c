#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 * variable n is declared
 * n will change everytime the programe is being run
 * if statement to change the output of n
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastDigit = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* getting the last digit of n */
	lastDigit = n % 10;
	if (lastDigit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	else if (lastDigit == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	else if (lastDigit < 6 && lastDigit != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
	return (0);
}
