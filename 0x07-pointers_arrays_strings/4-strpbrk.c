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
	int n;

	for (n = 0; s[n] >= '\0'; n++)
	{
		if (s[n] == c)
			return (s + n);
	}

	return ('\0');
}

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: the string to be searched.
 * @accept: the string used to search.
 *
 * Return: a pointer to the byte in @s that matches one of
 * the bytes in accept, OR
 * NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (_strchr(accept, *s))
		{
			return (s);
		}
		else
		{
			s++;
		}
	}
	return ('\0');
}
