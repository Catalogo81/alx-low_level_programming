#include "main.h"

/**
 * _pow_recursion - returns value of x to the power of y
 * @x: first value
 * @y: the power value
 *
 * Return: If y < 0, return -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
