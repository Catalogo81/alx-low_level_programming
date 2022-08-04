#include "function_pointers.h"

/**
 * array_iterator - executes a function as a parameter on each array element
 * @array: array pointer
 * @size: size of array
 * @action: function pointer
 *
 * Return: array size
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
