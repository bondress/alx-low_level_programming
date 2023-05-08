#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @n: number of bytes to fill memory with
 * @b: byte used to fill memory
 * @s: pointer to memory area to be filled.
 *
 * Return: a pointer to @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *a = s;

	while (n--)
	{
		*a++ = b;
	}
	return (s);
}
