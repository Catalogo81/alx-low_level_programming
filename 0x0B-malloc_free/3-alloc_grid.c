#include "main.h"

/**
 * alloc_grid - returns a pointer to a inter 2 dimensional array
 * @width: parm_1
 * @height: parm_2
 *
 * Return: Pointer, NULL if parm-1 and parm_2 is <= 0
 */
int **alloc_grid(int width, int height)
{
	int iHeight, iWidth, **p;

	if (width <= 0 || height <= 0)
		return (NULL);
	p = malloc(sizeof(int *) * height);

	if (p == NULL)
		return (NULL);
	for (iHeight = 0; iHeight < height; iHeight++)
	{
		p[iHeight] = malloc(sizeof(int) * width);
		if (p[iHeight] == NULL)
		{
			while (iHeiight >= 0)
			{
				free(p[iHeight]);
				iHeight--;
			}
			free(p);
			return (NULL);
		}
	}
	for (iHeight = 0; iHeight < height; iHeight++)
	{
		for (iWidth = 0;  iWidth < width; iWidth++)
			p[iHeight][iWidth] = 0;
	}
	return (p);
}
