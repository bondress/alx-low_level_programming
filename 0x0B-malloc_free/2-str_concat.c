#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL on failure, otherwise return
 * pointer to a newly allocated space in memory
 * which contains the contents of s1, followed
 * by the contents of s2, and null terminated.
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int n, o = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (n = 0; s1[n] || s2[n]; n++)
		len++;

	new_str = malloc(len * sizeof(char));

	if (new_str == NULL)
		return (NULL);


	for (n = 0; s1[n]; n++)
		new_str[o++] = s1[n];

	for (n = 0; s2[n]; n++)
		new_str[o++] = s2[n];

	return (new_str);
}
