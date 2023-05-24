#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to be searched
 * @size: number of elements in @array
 * @cmp: pointer to the function to be used
 * to compare values
 *
 * Return: if size <=0 or no element matches,
 * return -1, otherwise return the index of
 * the first element for which the cmp function
 * does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
