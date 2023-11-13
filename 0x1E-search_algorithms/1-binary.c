#include "search_algos.h"

/**
 * binary_search - searches for a value in an integer array using a binary
 * search algorithm, not guaranteed to return lowest index if `value` appears
 * twice in `array`
 * @array: pointer to first element of array to seach
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	int one, two, three;
	int b;

	if (array == NULL)
	{
		return (-1);
	}

	one = 0;
	three = size - 1;

	while (one <= three)
	{
		two = (one + three) / 2;

		printf("Searching in array: ");
		for (b = one; b <= three; b++)
			printf("%i%s", array[b], b == three ? "\n" : ", ");

		if (array[two] < value)
			one = two + 1;
		else if (array[two] > value)
			three = two - 1;
		else
			return (two);
	}

	return (-1);
}
