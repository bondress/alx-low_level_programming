#include "main.h"

/**
 * *_strncat - concatenates two strings.
 * @src: string to be appended to @dest
 * @dest: string that @src will be appended to.
 * @n: number of bytes from @src to be used.
 *
 * Return: @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int d_len = 0, i = 0;

	while (dest[i++])
		d_len++;

	for (i = 0; i < n && src[i]; i++)
		dest[d_len++] = src[i];

	return (dest);
}
