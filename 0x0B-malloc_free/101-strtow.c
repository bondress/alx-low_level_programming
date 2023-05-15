#include "main.h"
#include <stdlib.h>

int word_l(char *s);
int count_w(char *s);
char **strtow(char *str);

/**
 * word_l - Locates the index marking the end of the
 *            first word contained within a string.
 * @s: The string to be searched.
 *
 * Return: The index marking the end of the initial word pointed to by @s.
 */
int word_l(char *s)
{
	int i = 0, l = 0;

	while (*(s + i) && *(s + i) != ' ')
	{
		l++;
		i++;
	}

	return (l);
}

/**
 * count_w - Counts the number of words contained within a string.
 * @s: The string to be searched.
 *
 * Return: The number of words contained within @s.
 */
int count_w(char *s)
{
	int i = 0, w = 0, l = 0;

	for (i = 0; *(s + i); i++)
		l++;

	for (i = 0; i < l; i++)
	{
		if (*(s + i) != ' ')
		{
			w++;
			i += word_l(s + i);
		}
	}

	return (w);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 *
 * Return: If str = NULL, str = "", or the function fails - NULL.
 *         Otherwise - a pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	char **newstr;
	int i = 0, ws, w, ls, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	ws = count_w(str);
	if (ws == 0)
		return (NULL);

	newstr = malloc(sizeof(char *) * (ws + 1));
	if (newstr == NULL)
		return (NULL);

	for (w = 0; w < ws; w++)
	{
		while (str[i] == ' ')
			i++;

		ls = word_l(str + i);

		newstr[w] = malloc(sizeof(char) * (ls + 1));

		if (newstr[w] == NULL)
		{
			for (; w >= 0; w--)
				free(newstr[w]);

			free(newstr);
			return (NULL);
		}

		for (l = 0; l < ls; l++)
			newstr[w][l] = str[i++];

		newstr[w][l] = '\0';
	}
	newstr[w] = NULL;

	return (newstr);
}
