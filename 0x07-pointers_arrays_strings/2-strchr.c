#include "main.h"

/**
 * _strchr - locates the first occurence of a character
 * in a string.
 * @s: a pointer to the string
 * @c: the character to be located
 *
 * Return: a pointer to @c or NULL if the character
 * is not found.
 */
char *_strchr(char *s, char c)
{
	char *findC;

	do {
		if (*s == c)
		{
			findC = s;
			break;
		}
	} while (*s++);
	return (findC);
}
