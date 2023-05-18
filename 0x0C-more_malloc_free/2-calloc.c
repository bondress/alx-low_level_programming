#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc.
 * @nmemb: the number of elements
 * @size: number of bytes to be allocated
 * for each element of nmemb
 *
 * Return: NULL if nmemb or size is 0, or malloc fails
 * otherwise return a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;
	char *c;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = malloc(nmemb * size);

	if (m == NULL)
		return (NULL);

	c = m;

	for (i = 0; i < (nmemb * size); i++)
		c[i] = '\0';

	return (m);
}
