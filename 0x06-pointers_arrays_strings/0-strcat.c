#include "main.h"

/**
 * *_strcat - concatenates two strings.
 * @dest: first strong to be concatenated.
 * @src: second string to be concatenated.
 *
 * Return: @dest
 */
char *_strcat(char *dest, char *src)
{
	int d_len = 0, i = 0;

	while (dest[i++])
		d_len++;

	for (i = 0; src[i]; i++)
		dest[d_len++] = src[i];

	return (dest);
}
