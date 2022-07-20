#include "main.h"

/**
 * is_prime_number - returns 1 prime number, else returns 0
 * @n: the number variable
 *
 * Return: prime or not
 */
int is_prime_number(int n)
{
	return (prime_checker(n, 1));
}
/**
 * prime_checker - checks prime numbers
 * @n: the number variable
 * @n: the iterator variable
 *
 * Return: 1 or 0
 */
int prime_checker(int n)
{
	if (n <= 1)
		return (0);
	if ((n / i) < i)
		return(1);
	if (n % i == 0 && i > 1)
		return (0);
	return (prime_checker(n, i = 1));
}
