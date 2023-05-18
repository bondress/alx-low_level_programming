#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: first value in the array
 * @max: last value in the array
 *
 * Return: NULL if min > max or malloc fails
 * otherwise return a pointer to the newly
 * created array which contains all the values
 * from min to max, ordered from min to max.
 */
int *array_range(int min, int max)
{
	int *arr, i, s;

	if (min > max)
		return (NULL);

	s = max - min + 1;

	arr = malloc(s * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < s; i++)
		arr[i] = min++;

	return (arr);
}
