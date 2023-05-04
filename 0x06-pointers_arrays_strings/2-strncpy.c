#include "main.h"

/**
 * *_strncpy - copies a string.
 *
 * @dest: points to the buffer that @src points to.
 * @src: points to the string to be copied.
 * @n: bytes of @src to be copied
 *
 * Return: @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i]; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
