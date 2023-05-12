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
 * _strspn - gets the length of a prefix substring
 * @s: a pointer to the main string
 * @accept: a pointer to the substring
 *
 * Return: the number of bytes in the initial segment
 * of @s which consist only of bytes from @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int l = 0;

	while (*s && _strchr(accept, *s++))
	{
		l++;
	}
	return (l);
}
