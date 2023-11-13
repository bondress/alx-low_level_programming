#include "search_algos.h"

int bsh(int *array, int value,
			 size_t low, size_t high);
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
 * bsh - searches for a value in an integer array using a
 * binary search algorithm, not guaranteed to return lowest index if `value`
 * appears twice in `array` (modified from `binary_search`)
 * @array: pointer to first element of array to seach
 * @value: value to search for
 * @low: starting index
 * @high: ending index
 *
 * Return: index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int bsh(int *array, int value,
			 size_t low, size_t high)
{
	size_t m, b;

	if (!array)
		return (-1);

	while (low <= high)
	{
		m = (low + high) / 2;
		printf("Searching in array: ");
		for (b = low; b <= high; b++)
			printf("%i%s", array[b], b == high ? "\n" : ", ");
		if (array[m] < value)
			low = m + 1;
		else if (array[m] > value)
			high = m - 1;
		else
			return ((int)m);
	}

	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using an exponential search algorithm
 * @array: pointer to first element of array to search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t one, two, three = 1;

	if (!array || size == 0)
		return (-1);

	while (three < size && array[three] < value)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       three, array[three]);
		three *= 2;
	}

	one = three / 2;
	two = min_value(three, size - 1);
	printf("Value found between indexes [%lu] and [%lu]\n", one, two);
	return (bsh(array, value, one, two));
}
