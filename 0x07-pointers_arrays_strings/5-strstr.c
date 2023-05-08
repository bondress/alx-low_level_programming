#include "main.h"

/**
 * compare - checks if two strings are the same
 * @a: first string to be checked
 * @b: second string to be checked
 *
 * Return: true if strings are the same
 * false if strings are not the same
 */
int compare(char *a, char *b)
{
	while (*a && *b)
	{
		if (*a != *b)
		{
			return (0);
		}
		a++;
		b++;
	}
	return (*b == '\0');
}

/**
 * _strstr - locates a substring.
 * @haystack: the string to be searched.
 * @needle: the substring being searched for.
 *
 * Return: a pointer to the beginning of the
 * located substring or NULL if the substring
 * is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if ((*haystack == *needle) && compare(haystack, needle))
		{
			return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
