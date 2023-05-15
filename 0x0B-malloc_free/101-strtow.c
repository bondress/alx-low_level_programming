#include "main.h"
#include <stdlib.h>

/**
 * recWordCounter - counts number of words recursively
 * @s: pointer to a char
 * @n: current index
 * Return: number of words in @s
 */
int recWordCounter(char *s, int n)
{
	if (s[n] == '\0')
		return (0);
	if (s[n] == ' ' && s[n + 1] != ' ' && s[n + 1] != '\0')
		return (1 + recWordCounter(s, n + 1));
	return (recWordCounter(s, n + 1));
}

/**
 * wordCount - counts numberof words in an array of strings
 * @s: pointer to a char
 * Return: number of words in @s
 */
int wordCount(char *s)
{
	if (s[0] != ' ')
		return (1 + recWordCounter(s, 0));
	return (recWordCounter(s, 0));
}

/**
 * strtow - splits a string into words
 * @str: string to be split
 *
 * Return: NULL is str == NULL or str == ""
 * or function fails, otherwise return
 * a pointer to @str
 */
char **strtow(char *str)
{
	char **newstr;
	int i, j, k, w;

	if (str == NULL || str[0] == 0)
		return (NULL);
	w = wordCount(str);
	if (w < 1)
		return (NULL);
	newstr = malloc(sizeof(char) * (w + 1));
	if (newstr == NULL)
		return (NULL);
	i = 0;
	while (i < w && *str != '\0')
	{
		if (*str != ' ')
		{
			j = 0;
			while (str[j] != ' ')
				j++;
			newstr[i] = malloc(sizeof(char) * (j + 1));
			if (newstr[i] == NULL)
			{
				while (--i >= 0)
					free(newstr[--i]);
				free(newstr);
				return (NULL);
			}
			k = 0;
			while (k < j)
			{
				newstr[i][k] = *str;
				k++, str++;
			}
			newstr[i][k] = '\0';
			i++;
		}
		str++;
	}
	newstr[i] = '\0';
	return (newstr);
}
