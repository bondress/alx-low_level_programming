#include "function_pointers.h"

/**
 * array_iterator - executes a function given
 * as a parameter on each element of an array.
 * @array: an array of integers
 * @size: the size of the array
 * @action: a pointer to the function to be executed
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!array || !action)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
