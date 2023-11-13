#include "search_algos.h"
#include <math.h>

size_t min_value(size_t a, size_t b);

/**
 * min_value - returns the minimum of two size_t values
 * @a: first value
 * @b: second value
 *
 * Return: `a` if lower or equal to `b`, `b` otherwise
 */
size_t min_value(size_t a, size_t b)
{
	return (a <= b ? a : b);
}

/**
 * jump_search - searches for a value in a sorted array of integers using
 * a jump search algorithm
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	size_t one, two, three;

	if (!array || size == 0)
		return (-1);

	three = sqrt(size);

	for (two = 0; two < size && array[two] < value;
	     one = two, two += three)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       two, array[two]);
	}

	/* causes 'found' msg even when value not in array */
	printf("Value found between indexes [%lu] and [%lu]\n", one, two);

	for (; one <= min_value(two, size - 1); one++)
	{
		printf("Value checked array[%lu] = [%d]\n", one, array[one]);
		if (array[one] == value)
			return (one);
	}

	return (-1);
}
