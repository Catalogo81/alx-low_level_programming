#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - returns the sum of a and b
 * @a: first parameter
 * @b: second parameter
 *
 * Return: sum of both parameters
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns the difference of a and b
 * @a: first parameter
 * @b: second parameter
 *
 * Return: differnce of both parameters
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - returns the product of a and b
 * @a: first parameter
 * @b: second parameter
 *
 * Return: division of both parameters
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - returns the result of the division of a by b
 * @a: first parameter
 * @b: second parameter
 *
 * Return: division of both parameters
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - returns the remainder of the division of a by b
 * @a: first parameter
 * @b: second parameter
 *
 * Return: remainder of both parameters
 */
int op_mod(int a, int b)
{
	return (a % b);
}
