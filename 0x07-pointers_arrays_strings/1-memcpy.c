#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: pointer to memory area that bytes are copied to.
 * @src: pinter to memory area that bytes are copied from.
 * @n: number of bytes to be copied.
 *
 * Return: a pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptrDest = dest;
	char *ptrSrc = src;

	while (n)
	{
		*(ptrDest++) = *(ptrSrc++);
		--n;
	}
	return (dest);
}
