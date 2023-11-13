#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using an interpolation search algorithm
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t one = 0;
	size_t two = size - 1;
	size_t three;

	if (!array)
		return (-1);

	while ((array[two] != array[one]) &&
	       (value >= array[one]) && (value <= array[two]))
	{
		three = one + (((double)(two - one) / (array[two] - array[one]))
			    * (value - array[one]));
		printf("Value checked array[%lu] = [%d]\n", three, array[three]);
		if (array[three] < value)
			one = three + 1;
		else if (value < array[three])
			two = three - 1;
		else
			return (three);
	}
	if (value == array[one])
	{
		printf("Value checked array[%lu] = [%d]\n", one, array[one]);
		return (one);
	}
	three = one + (((double)(two - one) / (array[two] - array[one]))
		     * (value - array[one]));
	printf("Value checked array[%lu] is out of range\n", three);
	return (-1);
}
