#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a
 * 2-dimensional array of integers.
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: NULL if width or height <=0 or
 * on failure otherwise a pointer to the
 * 2-dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **new_arr;
	int hi, wi;

	if (width <= 0 || height <= 0)
		return (NULL);

	new_arr = malloc(height * sizeof(int *));

	if (new_arr == NULL)
		return (NULL);

	for (hi = 0; hi < height; hi++)
	{
		new_arr[hi] = malloc(width * sizeof(int));

		if (new_arr[hi] == NULL)
		{
			for (; hi >= 0; hi--)
				free(new_arr[hi]);

			free(new_arr);
			return (NULL);
		}
	}

	for (hi = 0; hi < height; hi++)
	{
		for (wi = 0; wi < width; wi++)
			new_arr[hi][wi] = 0;
	}
	return (new_arr);
}
