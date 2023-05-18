#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concactenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of first bytes from s2
 *
 * Return: - NULL if function fails
 * otherwise, pointer to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int i, len = n;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	new_str = malloc((len + 1) * sizeof(char));

	if (new_str == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
		new_str[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		new_str[len++] = s2[i];

	new_str[len] = '\0';

	return (new_str);
}
