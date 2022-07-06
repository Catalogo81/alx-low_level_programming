#include "main.h"

/**  _abs - computes the absolute value of an integer
 * @x: a number thats used to get the absolute value
 * Return: absolute value of a number as int
 */
int _abs(int x)
{
	if (x < 0)
	{
		x = -x;
	}

	return (x);
	_putchar('\n');
}
