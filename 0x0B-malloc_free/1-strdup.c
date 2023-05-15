#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory, which contains a copy of the
 * string given as a parameter.
 * @str: string to be copied
 *
 * Return: NULL if str = NULL or if insufficient
 * memory is available, otherwise return a copy of @str
 */
char *_strdup(char *str)
{
	char *new_str;
	int n, len = 0;

	if (str == NULL)
		return (NULL);

	for (n = 0; str[n]; n++)
		len++;

	new_str = malloc((len + 1) * sizeof(char));

	if (new_str == NULL)
		return (NULL);

	for (n = 0; str[n]; n++)
		new_str[n] = str[n];

	new_str[len] = '\0';

	return (new_str);
}
