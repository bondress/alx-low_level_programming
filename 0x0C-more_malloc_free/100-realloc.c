#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated with a
 * call to malloc
 * @old_size: the size in bytes, of the allocated space for ptr
 * @new_size: the new size in bytes, of the new memory block
 *
 * Return: NULL if new_size == 0 and ptr is not NULL
 * ptr if new_size == old_size
 * otherwise a pointer to the reallocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *m;
	char *c, *new_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		m = malloc(new_size);

		if (m == NULL)
			return (NULL);

		return (m);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = ptr;
	m = malloc(new_size * sizeof(*new_ptr));

	if (m == NULL)
	{
		free(ptr);
		return (NULL);
	}

	c = m;

	for (i = 0; i < old_size && i < new_size; i++)
		c[i] = *new_ptr++;

	free(ptr);
	return (m);
}
